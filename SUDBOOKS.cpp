
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	stack <long long int> s; 
	while(t--){
	    int n;cin>>n;
	    if(n==1){
	        int m;cin>>m;
	        s.push(m);
	    }
	    else if(n==-1){
	        if(s.size()==0){
	            cout<<"kuchbhi?"<<endl;
	        }
	        else{
	            cout<<s.top()<<endl;
	            s.pop();
	        }
	        
	    }
	}
	return 0;
}
