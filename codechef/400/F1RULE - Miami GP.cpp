#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // Chef can race if his time is within 107% of the fastest time
        if (Y <= 1.07 * X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
