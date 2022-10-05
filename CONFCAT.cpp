#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    int flag=0;int s = v[0];
	    for(int i=1;i<n;i++){
	        if(v[0]<v[i]){
	            flag = i;break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<flag<<endl;
	        for(int i=0;i<flag;i++){
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	        cout<<n-flag<<endl;
	        for(int i=flag ;i<n;i++){
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
