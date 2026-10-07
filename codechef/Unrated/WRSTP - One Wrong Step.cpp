#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string s; cin >> s;

        int dx = 0, dy = 0;
        for (char c : s) {
            if (c == 'U') dy++;
            else if (c == 'D') dy--;
            else if (c == 'L') dx--;
            else if (c == 'R') dx++;
        }

        if ((dx == 0 && abs(dy) == 2) || (dy == 0 && abs(dx) == 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
