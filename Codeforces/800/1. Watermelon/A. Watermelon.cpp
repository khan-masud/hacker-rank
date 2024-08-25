#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    // Check if w is even and greater than or equal to 4
    if (w % 2 == 0 && w >= 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
