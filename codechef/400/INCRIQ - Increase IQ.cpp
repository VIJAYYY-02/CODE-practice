#include <iostream>
using namespace std;

int main() {
    int X;  // current IQ of Chef
    cin >> X;

    // Chef gains +7 IQ after learning a musical instrument
    if (X + 7 > 170)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
