#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y)
            cout << "REPAIR" << endl;
        else if (Y < X)
            cout << "NEW PHONE" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}
