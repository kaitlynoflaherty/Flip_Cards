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
    deck(node <card> *front);
    ~deck(){};

    // Card member functions, friend functions
    void shuffle();
    friend ostream& operator<<(ostream& ostr, const deck& deck);

    private:
    //not sure if this is supposed to be private
    node <card> *front;

}; // end deck class

deck::deck()
// Constructor to create the 52 card deck
{
     node<card> *temp = new node<card>(); 
    node<card> *current = temp; 
    
    // 
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j<= 13; j++) {
            // Current node<card*> set to point to a new allocated space for a node<card*>
            current->next = new node<card> (new card(value(j), suit(i)));
            // The current node<card*> is set to the newly created node<card*>
            current = current->next;
        }

    }

    front = temp->next;
    delete temp; 
}

void deck::shuffle()
{

}


#endif