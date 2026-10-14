#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> a(n);
	    
	    for(int i=0;i<n;i++) cin>> a[i];
	    sort(a.begin(),a.end());
	    
	     int m=a[n-1];
	     for(int i=n-2;i>=0&&k>0;i--,k--){
	         m+=a[i];
	     }
	     cout<<m<<endl;
	}

}
