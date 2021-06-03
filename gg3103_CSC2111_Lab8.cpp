#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

const int max = 50;

void readData(ifstream& infile, string name[], int scores[][5],int& n)
{
    n = 0;
    int i = 0;
    int j = 0;
    while(!infile.eof())
    {
        infile >> name[i];
        for(int j = 0; j < 5; j++)
        {
            infile >> scores[i][j];
            i++;
        }
    }
    n = i;
}

char calculateGrade(double average)
{
    if(average >= 90 && average <  100)
    {
        return 'A';
    }
    else if(average >= 80 && average <= 89)
    {
        return 'B';
    }
    if(average >= 70 && average <= 79)
    {
        return 'C';
    }
    if(average >= 60 && average <= 69)
    {
        return 'D';
    }
    if(average >= 50 && average <= 59)
    {
        return 'E';
    }
    if(average < 50)
    {
        return 'F';
    }
}

void calculateAverage(int a[][5], char grad[], double avg[],int studentsCount)
{
    for(int i = 0; i < studentsCount; i++)
    {
        double sum = 0;
        for(int j = 0; j < 5; j++)
        {
            avg[i] = sum / 5.0;

            grad[i] = calculateGrade(avg[i]);
        }
    }
}

void print(string name[],double avg[], int scores[][5], char grad[], int n)
{
    cout << setw(10) << "Students name: " << setw(20) << "Test Scores: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << setw(8) << scores[i];
    }

    cout << endl;
    cout << setw(10) << "Student name: " << setw(10) << "Average: " << setw(10) << "Grade: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << setw(10) << name[i] << setw(10) << avg[i] << setw(10) << grad[i] << endl;
        cout << endl;
    }
}

int main()
{
    string name[max];
    int scores[max][5];
    double avg[max];
    char grad[max];
    int studentsCount;

    ifstream inputfile("grade.txt");
    if(!inputfile)
    {
        cout << "Unable to open the input files." << endl;
    }

    readData(inputfile, name,scores, studentsCount);
    inputfile.close();
    calculateAverage(scores, grad, avg, studentsCount);
    print(name, avg, scores, grad, studentsCount);
}