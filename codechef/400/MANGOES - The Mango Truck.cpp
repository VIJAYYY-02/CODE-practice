#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Bridge can withstand Z kg, truck weighs Y kg
        // Each mango weighs X kg
        // Maximum mangoes = (Z - Y) / X
        int maxMangoes = (Z - Y) / X;

        cout << maxMangoes << "\n";
    }

    return 0;
}
