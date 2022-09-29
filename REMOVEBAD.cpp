#include <bits/stdc++.h>
using namespace std;
int main() {

	int t;cin>>t;
	while(t--){
	    int n;cin>>n;vector<int>v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    int length = *max_element(v.begin(), v.end());
	    int len = length +1;
	    vector<int>dat(len,0);
	    for(int i=0;i<n;i++){
	        dat[v[i]]++;
	    }
	    int ans = *max_element(dat.begin(), dat.end());
	    int f = n-ans;
	    cout<<f<<endl;
	}
	return 0;
}
