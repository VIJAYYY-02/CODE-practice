#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int countA_a = 0, countA_b = 0;
        int countB_a = 0, countB_b = 0;

        for (char c : A) {
            if (c == 'a') countA_a++;
            else countA_b++;
        }
        for (char c : B) {
            if (c == 'a') countB_a++;
            else countB_b++;
        }

        if (countA_a == countB_b && countA_b == countB_a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
