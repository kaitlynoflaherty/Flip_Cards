//Project #2: Flip Cards part a
//
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Main function for Flip Cards part a program.
// Implements a function main() which initializes a deck, d_52, and prints the 
// deck in order. The deck is then shuffled and printed three tines.
//

#include <iostream>
#include <stdlib.h>
#include "d_node.h"
#include "deck.h"
#include "card.h"
#include <cmath>

using namespace std;

int main()
{
    //create deck & print
    deck d_52;
    cout << "The deck before shuffle:" << endl << d_52 << endl;
    
    // Shuffle deck three times & print

    d_52.shuffle();
    cout << "Deck after 1st shuffle:" << endl << d_52 << endl;

    d_52.shuffle();
    cout << "Deck after 2nd shuffle:" << endl << d_52 << endl;

    d_52.shuffle();
    cout << "Deck after 3rd shuffle:" << endl << d_52 << endl;

} // End main