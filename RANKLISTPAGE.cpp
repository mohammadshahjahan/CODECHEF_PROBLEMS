#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;int ans;
	    if(n%25==0){
	        ans = n/25;
	    }
	    else{
	        ans = n/25;
	        ans = ans+1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
