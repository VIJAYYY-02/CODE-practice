#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int len = N - K;

        // Sum of first window
        int sum = 0;
        for (int i = 0; i < len; i++) {
            sum += A[i];
        }

        int maxSum = sum;

        // Sliding window
        for (int i = len; i < N; i++) {
            sum += A[i];
            sum -= A[i - len];

            maxSum = max(maxSum, sum);
        }

        cout << maxSum << endl;
    }

    return 0;
}