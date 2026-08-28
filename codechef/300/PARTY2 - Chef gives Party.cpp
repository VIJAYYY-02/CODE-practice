#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        if (K >= N * X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
