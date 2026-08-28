#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T; cin >> T;
while (T--) {
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B && A > C) cout << "ALICE" << endl;
    else if (B > A && B > C) cout << "BOB" << endl;
    else cout << "CHARLIE" << endl;
}

}
