#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    int m;cin>>m;
	    vector<int>b;
	    for(int i=0;i<m;i++){
	        int x;cin>>x;
	        b.push_back(x);
	    }
	    int max =0;
	    for(int i=0;i<m;i++){
	       if(b[i]>0){
	           max+=b[i];
	       }
	   }
	   v.insert(v.begin(),max);
	   long long maxi=0;long long sum =0;
	   for(int i=0;i<v.size();i++){
	       sum+=v[i];
	       if(sum>maxi){
	           maxi = sum;
	       }
	       if(sum<0){
	           sum =0;
	       }
	   }
	   v.erase(v.begin());
	   v.push_back(max);
	   long long maxii =0;sum=0;
	   for(int i=v.size()-1;i>=0;i--){
	       sum+=v[i];
	       if(sum>maxii){
	           maxii = sum;
	       }
	       if(sum<0){
	           sum =0;
	       }
	   }
	   if(maxi>maxii)cout<<maxi<<endl;
	   else cout<<maxii<<endl;
	}
	return 0;
}
