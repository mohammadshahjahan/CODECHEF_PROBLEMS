#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;cin>>n; int a; int f;
	    vector<int> b; vector <int> g;
	    for(int i =0;i<n;i++){
	         cin>>a; b.push_back(a);
	    }
	    for(int i =0;i<n;i++){
	        cin>>f; g.push_back(f);
	    }
	    sort(b.begin(),b.end());
	    sort(g.rbegin(),g.rend()); int ans =0;
	    for(int i=0;i<n;i++){
	        int k = b[i]+g[i];
	        ans = max(ans,k);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
