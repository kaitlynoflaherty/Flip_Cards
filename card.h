#ifndef CARD_CLASS
#define CARD_CLASS

#include <iostream>
#include <stdlib.h>
#include <d_node.h>

using namespace std;

class card
// Class used to create card objects and functions
{
    public:
    //constructors and deconstructor
    card();
    ~card(){};

    // Card member functions, friend functions
    void setValue();
    void setSuit();
    int getValue();
    int getSuit();
    friend ostream& operator<<(ostream& ostr, const card& card);

    private:
    int _value, _suit;

}; // end card class

//Initializing card value and suit arrays 
const char* suit[] = {"Diamonds", "Spades", "Clubs", "Hearts"};
const char* value[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
                       "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

card::card()
// Constructor for card class
{
    
}

void card::setValue(const char* i)
// Function used to 
{
    _value = value[i];
}

void card::setSuit()
// Function used to 
{
    _suit = suit;
}

int card::getValue()
// Function used to access private data member _value
{
    return _value;
}

int card::getSuit()
//Function used to access private data member _suit
{
    return _suit;
}

ostream& operator<<(ostream& ostr, const card& card)
// Function to overload the '<<' operator to print card objects
{
    ostr << "The card is a " << card._value << 'of' << card._suit << endl;
    return ostr;
}

#endif