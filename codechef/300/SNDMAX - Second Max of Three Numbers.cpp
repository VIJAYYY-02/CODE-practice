#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    while(N--){
        int a,b,c;cin>>a>>b>>c;
        cout<<max(min(a,b),min(max(a,b),c))<<endl;
    }
}
