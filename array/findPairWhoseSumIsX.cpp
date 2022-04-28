//Solution to find adjacent pairs. Code for unserial pair --> Time Complexity O(log n)

/* Given an array of size n and a sum which is equal to the sum of a PAIR
   of element of the array */

#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    cout << "Feeded Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findPair(int arr[], int n, int sumToFind)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + arr[i + 1] == sumToFind)
        {
            cout << "Desired Pair of Elements : " << arr[i] << ", " << arr[i + 1] << endl;
            return 1;
        }
    }

    cout << "No pairs found" << endl;
    return 0;
}

int main()
{

    int arr[15];

    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    cout << "Input Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);

    int sumToFind;

    cout << "Enter Sum you wish to Find : ";
    cin >> sumToFind;

    findPair(arr, n, sumToFind);

    return 0;
}