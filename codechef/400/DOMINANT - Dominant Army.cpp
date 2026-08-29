#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int NA, NB, NC;
        cin >> NA >> NB >> NC;

        // An army is dominant if its soldiers > sum of the other two
        if (NA > NB + NC || NB > NA + NC || NC > NA + NB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
