#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x=0;
    cin >> n;
    string operation[n];

    for (int i = 0; i < n; i++)
    {
        cin >> operation[i];
        if (operation[i].find("++") != string::npos)
        {
            x++;
        }
        else if (operation[i].find("--") != string::npos)
        {
            x--;
        }
    }

    cout  << x;

    return 0;
}
