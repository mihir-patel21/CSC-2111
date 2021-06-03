#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare structure variable
struct studentType
{
    // Four components for structure
    string studentFName;
    string studentLName;
    char grade;
    int testScore;
}students[20];

// List of functions
int readStudentData(ifstream& inputFile, studentType students[]);
void getgrade(studentType students[], int n);
void displayData(ofstream& outputFile, studentType students[], int n);
void highestTestScore(ofstream& outputFile, studentType students[], int n);
bool openInputFile(ifstream& inputFile, char gradesFile[]);
void openOutputFile(ofstream& outputFile, char gradesFile[]);

int main()
{
    // Declare variables
    int n;
    bool status;

    // Creating the input and output files with Lab 8 files
    ifstream inputFile;
    ofstream outputFile;
    status = openInputFile(inputFile, "grade.txt");
    if(status) 
    {
        openOutputFile(outputFile, "gradeoutput.txt");
        n = readStudentData(inputFile, students);
        getgrade(students, n);
        displayData(outputFile, students, n);
        highestTestScore(outputFile, students, n);

        outputFile.close();
        inputFile.close();
    }
}

// openinput file function
bool openInputFile(ifstream& inputFile, char gradesFile[])
{
    inputFile.open(gradesFile);
    if(inputFile.fail())
    {
        cout << "File did not open." << endl;
        return false;
    }
    return true;
}

// readstudentdata function
int readStudentData(ifstream& inputFile, studentType studentts[])
{
    int n = 0;
    inputFile >> students[n].studentFName >> students[n].studentLName >> students[n].testScore;
    while(inputFile)
    {
        n++;
        inputFile >> students[n].studentFName >> students[n].studentLName >> students[n].testScore;
    }
    return n;
}

// getgrade function
void getgrade(studentType students[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        switch((int)(students[i].testScore / 10))
        {
            case 9: students[i].grade = 'A';
            break;
            case 8: students[i].grade = 'B';
            break;
            case 7: students[i].grade = 'C';
            break;
            case 6: students[i].grade = 'D';
            break;
           default: students[i].grade = 'F';
            break; 
        }
    }
}
// display data function
void displayData(ofstream& out, studentType students[], int n)
{
    cout << "Last name, First name, Score Grade" << endl;
    cout << "---------------------------------" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << setw(15) << left << students[i].studentLName << setw(15) << students[i].testScore << setw(3) << students[i].grade << endl;
    }
}

// highest test score function
void highestTestScore(ofstream& out, studentType students[], int n)
{
    string fname = "";
    string lname = "";
    int max = 0;
    int i;
    for(i = 1; i < n; i++)
    {
        if(students[i].testScore > students[max].testScore)
        {
            max = i;
        }
        cout << "Highest Test Score: " << students[max].testScore << endl;
    }
    for(i = 0; i < n; i++)
    {
        if(students[i].testScore > students[max].testScore)
        {
            cout << students[i].studentLName << "," << students[i].studentFName << endl;
        }
    }
    cout << endl;
}

void openOutputFile(ofstream& outFile, char gradesFile[])
{
    outFile.open(gradesFile);
}