#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        // Water added after Z hours
        int finalAmount = W + Y * Z;

        if (finalAmount < X)
            cout << "Unfilled\n";
        else if (finalAmount == X)
            cout << "Filled\n";
        else
            cout << "Overflow\n";
    }

    return 0;
}
