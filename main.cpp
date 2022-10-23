//Project #2: Flip Cards part a
//
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Main function for Flip Cards part a program.
// Implements a function play_flip() which 
//
// Implements a function main() which calls play_flip().
// Assumptions: The user will answer "NO" when prompted (capital letters)
//

#include <iostream>
#include <stdlib.h>
#include "d_node.h"
#include "deck.h"
#include "card.h"
#include <cmath>

using namespace std;


int play_flip()
// Function to 
{
    //initialize variables
    int total_points = 0, position = 0, prev_position = 0, choice;

    //initiate game
    // create deck & print
    deck d_52;
    cout << "The deck before shuffle:" << endl << d_52 << endl;

    //shuffle full deck three times & print final result
    d_52.shuffle();
    d_52.shuffle();
    d_52.shuffle();
    cout << "Shuffled deck:" << endl << d_52 << endl;

    // Move 24 cards to 'd_current' (new deck) & print
    deck d_current;
    card temp_card;
    node<card> *front;
    front = NULL;

    for (int i = 0; i < 24; i++)
    {
        temp_card = d_52.deal();
        if (front == NULL)
        {
            front = new node<card>(temp_card);
        }
        else
        {
            d_current.replace(temp_card);
        }

    }

    //print 52 card deck & 24 card deck
    cout << "d_52: " << endl << d_52 << endl;
    cout << "d_current:" << endl << d_current << endl;

    //do while loop which continues if user does not enter 'NO'
    do
    {
        //print current points
        cout << "You have " << total_points << "points." << endl;

        //ask user if they want to continue playing
        cout << "Would you like to continue playing? Choose 1 to continue and" 
        << "0 to quit." << endl;
        cin >> choice;

        //ask user to choose a position 1-24 
        cout << "Please choose a card from position 1 - 24" << endl;
        cin >> position;
    
        // range check for position 1 - 24
        if (position < 1 || position > 24 )
        {
            cout << "This card is out of range." << endl;
        }

        // BONUS: avoid flipping same card
        // idea: save each value already guessed to a container and compare each 
        // new guess to the previous guesses w/ loop & comparison


        // select a card, return value & suit
        // BONUS: don't remove card


        value = card_choice.getValue()
        suit = card-choice.getSuit()
    
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

        //update positon choice to previous choice to avoid repeated guesses
        prev_position = position;
    
    } 
    while (choice != 0); // end do while loop

    //print final points
    cout << "You finished with " << total_points << "points!" << endl;
    
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