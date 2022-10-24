//Project #2: Flip Cards part b
//
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Main function for Flip Cards part a program.
// Implements a function play_flip() which 
//
// Implements a function main() which calls play_flip().
// Assumptions: The user will answer 0 to quit the game (when prompted)
//

#include <iostream>
#include <stdlib.h>
#include "d_node.h"
#include "deck.h"
#include "card.h"
#include <cmath>
#include <vector>

using namespace std;


int play_flip()
// Function to 
{
    //initialize variables
    int total_points = 0, position = 0, prev_position = 0, choice = 1;
    vector<int> guesses;
    vector<card> cards;

    //initiate game
    // create deck & print
    deck d_52(52);

    cout << "The deck before shuffle:" << endl << d_52 << endl;

    //shuffle full deck three times & print final result
    d_52.shuffle();
    d_52.shuffle();
    d_52.shuffle();
    cout << "Shuffled deck:" << endl << d_52 << endl;

    // Move 24 cards to 'd_current' (new deck) & print
    // deck d_current(int 0);
    deck d_curr;
    node<card> *p;

    for (int i = 0; i < 24; i++)
    {
        p = d_52.deal();
        d_curr.replace(p);
    } // end for loop

  
    //print top 24 card deck
    cout << "Top 24 cards:" << endl << d_curr << endl;
    
    // Print remaining deck
    cout << "Remaining deck: " << endl << d_52 << endl;

    //do while loop which continues if user does not enter 'NO'
    do
    {
        //ask user to choose a position 1-24 
        cout << "Please choose a card from position 1 - 24" << endl;
        cin >> position;

        // range check for position 1 - 24
        if (position < 1 || position > 24 )
        {
            cout << "This card is out of range." << endl;
            break;
        }

        // BONUS: avoid flipping same card
        // idea: save each value already guessed to a container (vector?) and  
        // compare each new guess to the previous guesses w/ loop & comparison
        // adding to vector requires overloading, there may be an easier solution ????
        if (guesses.size() == 0)
        {
            guesses.push_back(position);
        }
        else
        {
            for (int i = 0; i < guesses.size(); i++)
            {
                if (position == guesses[i])
                {
                    cout << "You already chose this card! Please pick a new one.";
                    cin >> position;
                    break;
                }
            }
            guesses.push_back(position);
        }

        // select a card, return value & suit
        // BONUS: don't remove card
        card chosen_card = d_curr.getCard(position);
        cout << endl << "The card is " << chosen_card << endl;
        int value = chosen_card.getValue();
        string suit = chosen_card.getSuit();
    
        //calculate points
        if (value == 1)
        {
            total_points += 10;
        }
        else if ((value >= 11) && (value <= 13))
        {
            total_points += 5;
        }
        else if (value == 7)
        {
            total_points = total_points / 2;
            round(total_points);
        }
        else if ((value >= 2 && value <= 6))
        {
            total_points = 0;
        }
        else{}
    
        if (suit == "Heart")
        {
            total_points += 1;
        }

        
        //print current points
        cout << "You have " << total_points << " points." << endl;

        //ask user if they want to continue playing
        cout << "Would you like to continue playing? Choose 1 to continue and" 
        << " 0 to quit." << endl;
        cin >> choice;
    } 
    while (choice != 0); // end do while loop

    //print final points
    cout << "You finished with " << total_points << " points!" << endl;
    
} // End play_flip

int main()
{
    //initialize variables
    int num_players;

    //ask user how many players
    cout << "How many people are playing Flip Cards?" << endl;
    cin >> num_players;
    
    //will reinitialize for each new player.
    for (int i = 0; i < num_players; i++)
    {
        play_flip();
        cout << "The next player can begin!" << endl;
    }

    //compare player points and declare a winner (optional)


} // End main