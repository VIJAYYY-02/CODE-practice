#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (Y >= 3 * X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
