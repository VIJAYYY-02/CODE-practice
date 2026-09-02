#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> freq(31, 0);

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            // Find position of most significant set bit
            int msb = 31 - __builtin_clz(x);

            freq[msb]++;
        }

        cout << *max_element(freq.begin(), freq.end()) << endl;
    }

    return 0;
}