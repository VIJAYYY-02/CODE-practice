#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Each assignment takes Y minutes, total time needed = X * Y
        int totalTime = X * Y;

        // Chef has Z days, each day has 24 * 60 minutes
        int availableTime = Z * 24 * 60;

        if (totalTime <= availableTime)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
