#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int s,m,t;
	cin>>s>>m>>t;
	
	if((s*m)>=t){
	    if(t%m==0) cout<<"YES\n";
	else
	    cout<<"NO\n";
	}
	else cout<<"NO\n";

}
