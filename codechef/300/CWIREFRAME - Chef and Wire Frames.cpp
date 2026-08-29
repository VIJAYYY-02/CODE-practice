#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, X;
        cin >> N >> M >> X;
        cout << 2 * (N + M) * X << endl;
    }
    return 0;
}
