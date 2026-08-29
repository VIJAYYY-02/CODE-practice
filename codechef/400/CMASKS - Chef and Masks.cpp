#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int disposableCost = X * 100;   // cost for 100 days using disposable masks
        int clothCost = Y * 10;         // cost for 100 days using cloth masks
        if (clothCost <= disposableCost)
            cout << "CLOTH" << endl;
        else
            cout << "DISPOSABLE" << endl;
    }
    return 0;
}
