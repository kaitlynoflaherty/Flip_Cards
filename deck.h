#ifndef DECK_CLASS
#define DECK_CLASS

#include <iostream>
#include <stdlib.h>
#include <card.h>
#include <d_node.h>

class deck
// Class used to create card objects and functions
{
    public:
    //constructors and deconstructor
    deck();
    ~deck(){};
    // Card member functions, friend functions
    void shuffle();
    node<card> insert(node<card> *curr, const card& item);
    friend ostream& operator<<(ostream& ostr, const deck& deck);

    private:
    //not sure if this is supposed to be private
    node <card> *front;

}; // end deck class

deck::deck()
// Constructor to create the 52 card deck
{
    string suit = "spades";
 
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j<= 13; j++) {
            if (i == 1)
                suit = "hearts";
            else if (i == 2)
                suit = "clubs";
            else if (i == 3)
                suit = "diamonds";
            
            card newCard = card(j, suit);
            *front = insert(front, newCard);
        }
    }
}

node<card> deck::insert(node<card> *curr, const card& newCard)
{
	// declare pointer variables for the new node and the previous node
	node<card> *newNode;

	// allocate new dnode with item as initial value
	newNode = new node<card>(newCard);

	// update pointer fields in newNode
	newNode->next = curr;
	
	return *newNode;
}

void deck::shuffle()
{

}


#endif