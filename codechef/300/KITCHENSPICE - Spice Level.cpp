#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X < 4)
            cout << "MILD\n";
        else if (X < 7)
            cout << "MEDIUM\n";
        else
            cout << "HOT\n";
    }
    return 0;
}
