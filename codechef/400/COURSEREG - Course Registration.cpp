#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        // K students are already registered, N friends want to join
        // Total students after registration = K + N
        if (K + N <= M)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
