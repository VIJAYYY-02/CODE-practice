#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X <= 15)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
