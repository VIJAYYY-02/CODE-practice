#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
   
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        int messi = A * 2 + B;
        int ronaldo = X * 2 + Y;
        if (messi > ronaldo) cout << "MESSI" << endl;
        else if (ronaldo > messi) cout << "RONALDO" << endl;
        else cout << "EQUAL" << endl;


    

}