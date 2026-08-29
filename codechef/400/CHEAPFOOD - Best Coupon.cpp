#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        // Option 1: 10% off
        double discount1 = 0.1 * X;

        // Option 2: flat Rs. 100 off
        double discount2 = 100;

        // Maximum discount
        double maxDiscount = max(discount1, discount2);

        cout << (int)maxDiscount << "\n";
    }

    return 0;
}
