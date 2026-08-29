#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        // Each bike has 2 tyres, each car has 4 tyres
        int totalTyres = (N * 2) + (M * 4);

        cout << totalTyres << endl;
    }

    return 0;
}
