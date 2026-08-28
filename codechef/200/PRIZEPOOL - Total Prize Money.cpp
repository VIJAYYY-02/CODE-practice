#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases
    while (T--) {
        int X, Y;
        cin >> X >> Y;  // prizes for top 10 and next 90
        int total = (10 * X) + (90 * Y);
        cout << total << endl;
    }
    return 0;
}
