#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main() {
	// your code goes here
	ll t;cin>>t;
	while(t--){
	    ll n,k;cin>>n>>k;
	    if(n%k==0){
	        cout<<(n/k)<<endl;
	    }
	    else if(k%n==0){
	        cout<<1<<endl;
	    }
	    else{
	        ll gc= __gcd(n,k);
	        n = n/gc;
	        cout<<n<<endl;
	    }
	}
	return 0;
}

