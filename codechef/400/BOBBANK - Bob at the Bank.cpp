#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        // Each month Bob gains X and loses Y
        // After Z months, final balance = W + (X - Y) * Z
        int finalBalance = W + (X - Y) * Z;

        cout << finalBalance << "\n";
    }

    return 0;
}
