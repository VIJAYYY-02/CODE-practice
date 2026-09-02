#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long prev, x;
        cin >> prev;

        long long ans = llabs(prev);

        for (int i = 1; i < N; i++) {
            cin >> x;

            ans += llabs(x + prev);
            prev = x;
        }

        ans += llabs(prev);

        cout << ans / 2 << '\n';
    }

    return 0;
}