#include <iostream>
using namespace std;

void reverseArray(int A[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int arraySize;
    cin >> arraySize; // Input array size from user

    int values[arraySize]; // Initialize name of array and declare the size of array according to the inputted array size

    for (int i = 0; i < arraySize; i++) {
        cin >> values[i]; // Input elements of array
    }

    reverseArray(values, arraySize); // Call the function to reverse and print the array
    return 0;
}
