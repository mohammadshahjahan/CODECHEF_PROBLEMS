#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;cin>>n;int x;
	    vector<int> s;
	    for(int i =0;i<n;i++){
	        cin>>x;
	        s.push_back(x);
	    }
	    sort(s.begin(),s.end());
	    int max = s[n-1];
	    vector<int> DAT(max+1,0);
	    for(int i =0;i<n;i++){
	        DAT[s[i]]+=1;
	    }
	    int sum =0;
	    for(int i=0;i<DAT.size();i++){
	       sum+= DAT[i];
	    }
	    int count=0;int left=0,right =sum;
	    for(int i=0;i<DAT.size();i++){
	       left+=DAT[i];right-=DAT[i];
	       if(left>right){
	           count+= DAT[i];
	       }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
