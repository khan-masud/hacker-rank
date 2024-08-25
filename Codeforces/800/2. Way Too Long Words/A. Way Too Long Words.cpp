#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string words[n];

    for (int i=0; i < n; i++)
    {
        cin >> words[i];
    }

    for (int i=0; i < n; i++)
    {
         int charCount = words[i].length();
          if (charCount > 10)
          {
              cout << words[i][0] << charCount - 2 << words[i][charCount - 1] << endl;
          }
          else
          {
              cout << words[i] << endl;
          }
    }
    return 0;
}
