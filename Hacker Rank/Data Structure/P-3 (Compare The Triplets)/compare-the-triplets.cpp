#include <iostream>
using namespace std;

int main ()
{
    int a[3],b[3], alice=0, bobs=0;

    for (int i=0; i < 3; i++)
    {
        cin >> a[i]; // Input triplets for alice
    }

     for (int i=0; i < 3; i++)
    {
        cin >> b[i]; // Input triplets for bobs
    }

    for (int i=0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alice++; // If condition return true, increase value of alice 1
        }
        else if (a[i] < b[i])
        {
            bobs++; // If condition return true, increase value of bobs 1
        }
    }

    int points[2] = {alice, bobs}; // Create an array with the reward points of alice and bobs

      for (int i=0; i < 2; i++)
     {
        cout << points[i] << " "; // Output the new array
     }
}
