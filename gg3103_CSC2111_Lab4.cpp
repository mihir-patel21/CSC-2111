//==========================================================
//
// Title:      Lab 4
// Course:     CSC 2111
// Lab Number: 4
// Author:     Mihir Patel
// Date:       2/24/2021
// Description:
//   Find if it is a right triangle
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
    int a;
    int b;
    int c;

    // Get Data from user
    cout << "Find out whether a given triangle is right triangle or not! " << endl;

    cout << "Enter side A: " << endl;
    cin >> a;

    cout << "Enter side B: " << endl;
    cin >> b;

    cout << "Enter side C: " << endl;
    cin >> c;

    // If else statement for right angle triangle validation
    if((b + c) > a)
    {
        if((a + c) > b)
        {
            cout << "Triangle is valid right angle triangle!" << endl;
        }

        else
        {
            cout << "Triangle is not valid right angle triangle!" << endl;
        }
    }

    else
    {
        cout << "Triangle is not valid right angle triangle!" << endl;
    }
}