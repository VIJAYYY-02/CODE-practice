#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (X < Y)
            cout << "FIRST\n";
        else if (Y < X)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }
    return 0;
}
