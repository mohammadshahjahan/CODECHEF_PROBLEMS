#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,x;cin>>n>>x;
	    int fd= n-x;
	    int ans = min(x,fd);
	    cout<<ans<<endl;
	}
	return 0;
}
