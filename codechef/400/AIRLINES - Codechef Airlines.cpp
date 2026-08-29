#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Chef has 10 airplanes, each with capacity X
        // Y people want to book seats, each ticket costs Z rupees
        // He can sell at most 10 * X tickets, but only Y people are available
        int seatsAvailable = 10 * X;
        int seatsSold = min(seatsAvailable, Y);

        int earnings = seatsSold * Z;

        cout << earnings << "\n";
    }

    return 0;
}
