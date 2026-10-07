#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int countA = count(A.begin(), A.end(), '1');
        int countB = count(B.begin(), B.end(), '1');

        if ((countA % 2) == (countB % 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
