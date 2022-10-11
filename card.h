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
    card(int new_val, string new_suit);
    ~card(){};

    // Card member functions, friend functions
    void setValue(int val);
    void setSuit(string suit);
    int getValue();
    int getSuit();
    friend ostream& operator<<(ostream& ostr, const card& card);

    private:
    int _value;
    string _suit;

}; // end card class


card::card()
// Constructor for card class default value: Ace of Diamonds
{
    _value;
    _suit;
}

card::card(int new_value, string new_suit)
{
	_value = new_val;
	_suit = new_suit;
}

void card::setValue(int val)
// Function used to set the card value
{
    _value = val;
}

void card::setSuit(string suit)
// Function used to set the card suit
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