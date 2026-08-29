#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        // Calculate final prices after discounts
        int firstTV = A - C;
        int secondTV = B - D;

        if (firstTV < secondTV)
            cout << "First" << endl;
        else if (secondTV < firstTV)
            cout << "Second" << endl;
        else
            cout << "Any" << endl;
    }

    return 0;
}
