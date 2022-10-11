#include <iostream>
#include <stdlib.h>
#include <d_node.h>
#include <deck.h>
#include <card.h>
#include <cmath>

using namespace std;

int calculate_points(int total_points, int value, string suit)
// Function to calculate the points per card chosen
{
    if (value == 1)
    {
        total_points += 10;
    }
    else if ((value >= 11) && (value <= 13))
    {
        total_points += 5;
    }
    else if (value == 7)
    {
        total_points = total_points / 2;
        round(total_points);
    }
    else if ((value >= 2 && value <= 6)
    {
        total_points = 0;
    }
    else
    {
        
    }
    
    if (suit == "Heart")
    {
        total_points += 1;
    }
    
    return total_points;
} // End calculate_points

int main()
{
    //start game

    // Shuffle deck three times

    // Initialize points
    int total_points = 0;

    //have user choose which card they want to flip


    //calculate points
    calculate_points(total_points, value, suit);

    // print total points 
    cout << "You currently have " << total_points << " points." << endl;

    //ask user if they want to continue or end game
    
} // End main
