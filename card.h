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
    card(value _value, suit _suit);
    ~card(){};

    // Card member functions, friend functions
    void setValue(value _value);
    void setSuit(suit _suit);
    int getValue();
    int getSuit();
    friend ostream& operator<<(ostream& ostr, const card& card);

    private:
    value _value;
    suit _suit;

}; // end card class

//Initializing card value and suit arrays 
enum suit {Diamonds, Spades, Clubs, Hearts};
enum value {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, 
              Queen, King};

card::card()
// Constructor for card class default value: Ace of Diamonds
{
    _value = Ace;
    _suit = Diamonds;
}

card::card(value _value, suit _suit)
{
    _value = new_value;
    _suit = new_suit;
}

void card::setValue(value _value)
// Function used to 
{
    _value = new_value;
}

void card::setSuit(suit _suit)
// Function used to 
{
    _suit = new_suit;
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