#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int C, X, Y;
        cin >> C >> X >> Y;

        // Chef needs C chocolates, already has X
        // Each chocolate costs Y rupees
        int chocolatesToBuy = C - X;
        int moneyNeeded = chocolatesToBuy * Y;

        cout << moneyNeeded << "\n";
    }

    return 0;
}
