#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// mean function
double Mean(double x1, double x2, double x3, double x4, double x5)
{
    return(x1 +x2 +x3 +x4 + x5)/5;
}

// standard deviation funciton
double standardDev(double x1, double x2, double x3, double x4, double x5, double x)
{
    double sd;
    sd = (pow((x1-x),2) + pow((x2-x),2) + pow((x3-x),2) + pow((x4-x),2) + pow((x5-x),2))/5;
    sd = sqrt(sd);
    return sd;
}

int main()
{
    // declare variables
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    double x;
    double s;
    
    // User inputs
    cout << "Enter Value of x1 = " << endl;
    cin >> x1;

    cout << "Enter Value of x2 = " << endl;
    cin >> x2;

    cout << "Enter Value of x3 = " << endl;
    cin >> x3;

    cout << "Enter Value of x4 = " << endl;
    cin >> x4;

    cout << "Enter Value of x5 = " << endl;
    cin >> x5;

    // Use of the mean function
    x = Mean(x1,x2,x3,x4,x5);
    cout << "The mean value is: " << endl;

    // Use of the standard deviation function
    s = standardDev(x1,x2,x3,x4,x5,x);
    cout << "The standard deviation is: " << endl;

}