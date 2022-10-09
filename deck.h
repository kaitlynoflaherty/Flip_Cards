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
    deck();
    ~deck(){};

    // Card member functions, friend functions
    
    friend ostream& operator<<(ostream& ostr, const deck& deck);

    private:
    //not sure if this is supposed to be private
    node <card> *front;

}; // end deck class

deck::deck()



#endif