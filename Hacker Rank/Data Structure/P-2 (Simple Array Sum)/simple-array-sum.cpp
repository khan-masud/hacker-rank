#include <iostream>
using namespace std;

void sumOfArray(int ar[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i]; // Formula of sum
    }
    cout << sum;
}

int main ()
{
    int arraySize;
    cin >> arraySize;
    int ar[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> ar[i];
    }

    sumOfArray(ar, arraySize); // Declared the 'sumOfArray' function and passed the values
}
