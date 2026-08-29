#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X;  // contest duration in minutes
        cin >> X;

        // Total seconds available (excluding last 5 seconds)
        int totalSeconds = (X * 60 );

        // Each submission takes 30 seconds
        int maxSubmissions = totalSeconds / 30;

        cout << maxSubmissions << endl;
    }

    return 0;
}
