#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n,m,k;
     cin>>n>>m>>k;
     vector<int>occupied(m);
     for(int i=0;i<m;i++){
         cin>>occupied[i];
     }
     unordered_set<int> occ(occupied.begin(),occupied.end());
     
     vector<int> result;
     for(int s=1;s<=n&&result.size()<k;s++){
         if(occ.find(s)==occ.end()){
             result.push_back(s);
         }
     }
     for(int x: result){
         cout<<x<<" ";
     }
     cout<<"\n";
 }
 return 0;
}
