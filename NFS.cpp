#include <bits/stdc++.h>
using namespace std;
#define ll float
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    ll u,v,a,s; cin>>u>>v>>a>>s;ll f;
	    ll d = (u*u) - (2*a*s);
	    if(d<0)  f = 0;
	    else  f = sqrt(d);
	    if(u==v)cout<<"YES"<<endl;
	    else if(f<=v)cout<<"YES"<<endl;
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
