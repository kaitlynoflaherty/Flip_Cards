#include <iostream>
#include <stdlib.h>
#include <d_node.h>
#include <deck.h>
#include <card.h>
#include <cmath>

using namespace std;

int main()
{
    //create deck & print
    deck d_52;
    cout << d_52;
    // Shuffle deck three times
    d_52.shuffle();
    cout << d_52;

    d_52.shuffle();
    cout << d_52;

    d_52.shuffle();
    cout << d_52;

} // End main