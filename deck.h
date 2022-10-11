// Project #2: Flip Card part a
// 
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Header file for the deck class that stores a linked list of cards.
// Assumption: Each node of the linked list is a single card and no cards are 
// the same.


#ifndef DECK_CLASS
#define DECK_CLASS

#include <iostream>
#include <stdlib.h>
#include "card.h"
#include "d_node.h"

class deck
// Class used to create card objects and functions
{
    public:
    //constructors and deconstructor
    deck();
    ~deck();
    // Card member functions, friend functions
    void shuffle();
    node<card> insert(node<card> *curr, const card& item);
    friend ostream& operator<<(ostream& ostr, const deck& deck);

    private:
    node<card> *front;

}; // end deck class


deck::deck()
// Constructor to create the 52 ordered card deck
{
    front = NULL;
    string suit = "Spades"; // starting suit
 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 13; j > 0; j--)
        {
            if (i == 1)
                suit = "Hearts"; // change the suit
            else if (i == 2)
                suit = "Clubs"; // change the suit 
            else if (i == 3)
                suit = "Diamonds"; // change the suit
            
            // insert a new card at front of deck
            card newCard(j, suit);
            node<card> *newNode;
            newNode = new node<card>(newCard);
            if (front == NULL)
            {
                front = newNode;
            }
            else
            {
                newNode->next = front;
                front = newNode;
            }
        }
    }
}


deck::~deck()
// Destructor that deletes the linked list
{
    // node<card> *temp;
    // while(front != NULL) // iterates to end of deck
    // {
    //     temp = front;
    //     front = front->next;
    //     delete temp;
    // }
}



void deck::shuffle()
{
    srand(time(0));
    int incrementer = 0;

    node<card> *prev, *curr;
    for (int i = 0; i<1000; i++)
    {
        cout << "here" << endl;
        prev = front;
        curr = prev->next;
        int rand_int = rand() % 51;
        while(incrementer != rand_int)
        {
            curr = curr->next;
            prev = prev->next;
            incrementer += 1;
        }
        prev->next = curr->next;
        card newCard(curr->nodeValue);
        node<card> *newNode;
        newNode = new node<card>(newCard);
        newNode->next = front;
        front = newNode;
        incrementer = 0;
        prev = NULL;
        curr = NULL;
    }
}

ostream& operator<<(ostream& ostr, const deck& deck)
// Function to overload the '<<' operator to print card objects
{

    node<card> *curr;

    curr = deck.front; // set curr to front of the list
    while (curr != NULL) // continue until end of list
    {
        // output node value and move to the next node
        ostr << curr->nodeValue;
        curr = curr->next;
    }
    delete curr;
    return ostr;
}

#endif