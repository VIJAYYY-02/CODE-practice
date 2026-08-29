#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Gym cost = X, trainer cost = Y, total budget = Z
        if (X + Y <= Z)
            cout << 2 << "\n";  // can afford both gym and trainer
        else if (X <= Z)
            cout << 1 << "\n";  // can afford only gym
        else
            cout << 0 << "\n";  // can't afford even gym
    }

    return 0;
}
