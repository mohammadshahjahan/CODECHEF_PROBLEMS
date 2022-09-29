#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	   int y = 2*x;
	    int f = abs(a-b);
	    if(a==b){
	        cout<<"YES"<<endl;
	    }
	    else if(f%y==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
