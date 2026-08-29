#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        // Each loop of playlist lasts 3 * X minutes (A, B, C)
        // Song C plays once per loop, at the end of each cycle
        int fullLoops = N / (3 * X);

        cout << fullLoops << "\n";
    }

    return 0;
}
