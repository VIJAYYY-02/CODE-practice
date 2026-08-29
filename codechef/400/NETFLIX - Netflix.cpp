#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int A, B, C, X;
        cin >> A >> B >> C >> X;

        // Check if any two people together have enough money
        if ((A + B >= X) || (A + C >= X) || (B + C >= X))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
