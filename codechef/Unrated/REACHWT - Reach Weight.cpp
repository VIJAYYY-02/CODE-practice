#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int cost;

        if (N % 2 == 0)
            cost = (N / 2) * 30;
        else
            cost = (N / 2) * 30 + 20;

        cout << cost << endl;
    }

    return 0;
}