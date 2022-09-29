#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    int even=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]%2==0){
	            even+=1;
	        }
	        
	    }
	    if(even==n){
	        even =0;
	    }
	    cout<<even<<endl;
	}
	return 0;
}
