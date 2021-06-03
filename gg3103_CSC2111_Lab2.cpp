//==========================================================
//
// Title:      Lab 2
// Course:     CSC 2111
// Lab Number: 2
// Author:     Mihir Patel
// Date:       1/13/2021
// Description:
//   Average calculator
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
    int num1;
    int num2;
    int num3;
    int avg;

    num1 = 125;
    num2 = 28;
    num3 = -25;

    // Function
    avg = (num1 + num2 + num3) / 3;

    // Display outputs
    cout <<  "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "Num3: " << num3 << endl;
    cout << "Avg: " << avg << endl;
}