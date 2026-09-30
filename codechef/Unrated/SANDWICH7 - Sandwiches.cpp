#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, h, c;
    cin >> b >> h >> c;
    int count = 0;

    while (b >= 2 && (h > 0 || c > 0)) {
            b -= 2;
            count++;
            if (h > 0) h--;
            else if (c > 0) c--;
        
    }
    cout << count;

}