//==========================================================
//
// Title:      Lab 5
// Course:     CSC 2111
// Lab Number: 5
// Author:     Mihir Patel
// Date:       2/27/2021
// Description:
//  Dish preparer
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    // Declare variables
    int first_Dish;
    int prev_Dish;
    int time;
    int dishes;
    int prepare_Time;

    // Get data from user

    cout << "Enter time taken to prepare the first dish: " << endl;
    cin >> first_Dish;

    cout << "Enter time take to prepare the previous dish: " << endl;
    cin >> prev_Dish;

    cout << "Enter time to prepare all dishes: " << endl;
    cin >> time;

    // Create the counter for the while loop.
    prepare_Time = first_Dish;
    dishes = 0;

    // While Loop for prepared dishes
    while(prepare_Time <= time)
    {
        dishes++;
        first_Dish = first_Dish + prev_Dish;
    }

    cout << "Number of dishes prepared is " << dishes << endl;

}