// Project #2: Flip Card part a
// 
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Header file for the card class that stores a single card.
// Assumption: A card includes a value and a suit. The card value will be from 
// 1-13 and the suit will club, diamond, heart or spade.

#ifndef CARD_CLASS
#define CARD_CLASS

#include <iostream>
#include <stdlib.h>
#include "d_node.h"

using namespace std;


class card
// Class used to create card objects and functions
{
    public:
    //constructors and deconstructor
    card();
    card(int val, string suit);
    ~card(){};

    // PART B ********************************************
    // Copy constructor and overloaded assignment operator
    card(const card&);
    card& operator = (const card &c);

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
// Default constructor for card object with default value: Ace of Spades
{
    _value = 1;
    _suit = "Spades";
}

card::card(int value, string suit)
// Constructor: initializes card object with _value "value" and _suit "suit"
{
    _value = value;
    _suit = suit;
}

// PART B ********************************************
// Copy Constructor 
card::card(const card &c) { 
    _value = c._value;
    _suit = c._suit;
}

// PART B ********************************************
// Overloaded Assignment Operator
card& card::operator= (const card &c)
{
    card newCard = card(c._value, c._suit);
    return newCard;
}

void card::setValue(int value)
// Function used to set the card value
{
    _value = value;
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

string card::getSuit()
//Function used to access private data member _suit
{
    return _suit;
}

ostream& operator<<(ostream& ostr, const card& card)
// Function to overload the '<<' operator to print card objects
{
    ostr << card._value << " of " << card._suit << endl;
    return ostr;
}

#endif