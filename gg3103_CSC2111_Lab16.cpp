#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void insertionSort(int arr[], int n)

{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];

        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {

            arr[j + 1] = arr[j];

            j = j - 1;

        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 17, 22, 11, 3, 5 };

    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printArray(arr, n);

    return 0;
}