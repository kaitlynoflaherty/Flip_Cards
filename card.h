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
    card(int val, string suit);
    ~card(){};

    // Card member functions, friend functions
    void setValue(int value);
    void setSuit(string suit);
    int getValue();
    string getSuit();
    friend ostream& operator<<(ostream& ostr, const card& card);

    private:
    int _value;
    string _suit;

}; // end card class


card::card()
// Constructor for card class default value: Ace of Diamonds
{
    _value = 1;
    _suit = "Spade";
}

card::card(int value, string suit)
{
    _value = value;
    _suit = suit;
}

void card::setValue(int value)
// Function used to 
{
    _value = value;
}

void card::setSuit(string suit)
// Function used to 
{
    _suit = suit;
}

int card::getValue()
// Function used to access private data member _value
{
    return _value;
}

string card::getSuit()
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