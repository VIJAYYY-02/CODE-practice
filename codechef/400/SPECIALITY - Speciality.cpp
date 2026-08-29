#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (X > Y && X > Z)
            cout << "Setter" << endl;
        else if (Y > X && Y > Z)
            cout << "Tester" << endl;
        else
            cout << "Editorialist" << endl;
    }
    return 0;
}
