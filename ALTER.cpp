#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
     cin.tie(0);
	int t; cin>>t;
	while(t--){
	    int a,b,p,q;cin>>a>>b>>p>>q;
	    int w = p/a;
	    int e = q/b;
	    if(p%a==0 && q%b == 0){
	        if(w-e == 1 || e-w == 1 || e-w == 0){
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
