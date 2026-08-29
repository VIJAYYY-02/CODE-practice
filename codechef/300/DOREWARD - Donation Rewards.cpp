#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X <= 3)
            cout << "BRONZE\n";
        else if (X <= 6)
            cout << "SILVER\n";
        else
            cout << "GOLD\n";
    }
    return 0;
}
