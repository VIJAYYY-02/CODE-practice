#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    vector<int> a(n),b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	     for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    long long cost1=d;
	    long long cost2=d;
	    long long cost3=2LL*d;
	    for(int i=0;i<n;i++){
	        cost1+=a[i];
	        cost2+=b[i];
	        cost3+=min(a[i],b[i]);
	    }
	    cout<<min(cost1,min(cost2,cost3))<<endl;
	    
	}
	return 0;

}
