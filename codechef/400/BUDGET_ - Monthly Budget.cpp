#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // Akshat spends Y rupees per day for 30 days
        int totalExpense = Y * 30;

        if (X >= totalExpense)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
