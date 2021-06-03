#include <iostream>

using namespace std;
void printPattern(int num, int stars);
int main()
{
    int num;
    cout << "Enter number of stars: " << endl;
    cin >> num;
    printPattern(num,0);
    return 0;
}

void printPattern(int num, int stars)
{
    int i;
    for(i = 0; i < stars; i++)
    {
        cout << "*";
        cout << endl;
        if(stars == num)
        return;
        printPattern(num, ++stars);
    }

    for(i = 0; i < stars; i++);
    {
        cout <<"*";
        cout << endl;
    }
}