#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n], v[n], t[n];
    int pCount=0, vCount=0, tCount=0, solveCount=0;

    for (int i = 0; i < n; i++)
    {
             cin >> p[i] >> v[i] >> t[i];
             if (p[i] == 1)
             {
                 pCount++;
             }
              if (v[i] == 1)
             {
                 vCount++;
             }
              if (t[i] == 1)
             {
                 tCount++;
             }
             if (pCount + vCount + tCount >=2)
             {
                    solveCount++;
             }
             pCount = 0;
             vCount = 0;
             tCount = 0;
    }
    cout << solveCount;

    return 0;
}
