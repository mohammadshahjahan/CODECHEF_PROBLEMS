#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    int x[n];
	    int sum =0;
	    for(int i =0;i<n;i++){
	        cin>>x[i];
	        sum+=x[i];
	    }
	    int ans = (v * (n + k) - sum)/ k;
		if(ans <= 0 || ((v * (n + k) - sum) % k != 0)) {
			cout << "-1" << endl;
		} else {
			cout << ans << endl;
		}
	}
	return 0;
}
