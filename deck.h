#ifndef CARD_CLASS
#define CARD_CLASS

#include <iostream>
#include <stdlib.h>
#include <card.h>
#include <d_node.h>

class deck
// Class used to create card objects and functions
{
    public:
    //constructors and deconstructor
    deck(node <card> *front);
    ~deck(){};

    // Card member functions, friend functions
    void shuffle();
    friend ostream& operator<<(ostream& ostr, const deck& deck);

    private:
    //not sure if this is supposed to be private
    node <card> *front;

}; // end deck class

deck::deck(node <card> *front)
// Constructor to create the 52 card deck
{

}

void deck::shuffle()
{

}


#endif