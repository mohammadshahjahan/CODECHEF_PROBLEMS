#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        int k ;cin>>k;
	        m[k]++;
	    }
	    vector<int> v;
	    map<int,int>::iterator it;
	    for(it = m.begin();it!=m.end();it++){
	        v.push_back((*it).second);
	    }
	    int maxi = *max_element(v.begin(),v.end());
	    cout<<ceil(log2(maxi))<<endl;
	}
	return 0;
}
