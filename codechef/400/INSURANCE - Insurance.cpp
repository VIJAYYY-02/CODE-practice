#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // If repair cost is less than or equal to X, rebate = Y
        // Otherwise, rebate = X (maximum limit)
        if (Y <= X)
            cout << Y << "\n";
        else
            cout << X << "\n";
    }

    return 0;
}
