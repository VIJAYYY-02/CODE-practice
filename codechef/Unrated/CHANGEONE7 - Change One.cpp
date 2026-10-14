#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
   int t;
   cin>>t;
   
   while(t--){
       int n;
       cin>>n;
       
       vector<int> a(n);
       for(int i=0;i<n;i++) cin>>a[i];
       sort(a.begin(),a.end());
       
       
       int o1=a[n-2]-a[0];
       int o2=a[n-1]-a[1];
       
       cout<<min(o1,o2)<<"\n";
   }
   return 0;
}
