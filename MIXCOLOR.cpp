#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;cin>>n;int ch =0;
	    vector<int>a;
	    for(int i =0;i<n;i++){
	        int b;cin>>b;
	        a.push_back(b);
	    }
	    sort(a.begin(),a.end());
	    for(int i =1;i<n;i++){
	        if(a[i]==a[i-1]){
	            ch++;
	        }
	    }
	    cout<<ch<<endl;
	}
	return 0;
}
