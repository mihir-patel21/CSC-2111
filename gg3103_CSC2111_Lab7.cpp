#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Function to find out vowels
bool isVowel(char c)
{
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        return true;
    }

    else
    {
        return false;
    }
}

// function to write the answer as a string
string substr(string s)
{
    string ans = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(!isVowel(s[i]))
        {
            ans+=s[i];
        }
    }

    return ans;
}

// user inputs
int main()
{
    cout << "Enter a string: " << endl;
    string s;
    cin >> s;

    cout << substr(s) << endl;
}