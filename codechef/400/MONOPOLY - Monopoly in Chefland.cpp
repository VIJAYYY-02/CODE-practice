#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        // A company has a monopoly if its revenue is strictly greater
        // than the sum of the other two companies' revenues
        if (R1 > R2 + R3 || R2 > R1 + R3 || R3 > R1 + R2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
