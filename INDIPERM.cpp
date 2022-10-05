#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        a[i]=i+1;
	    }
	    for(int i =1;i<n-1;i++){
	        long long temp = a[i];
	        a[i]=a[i+1];
	        a[i+1]=temp;
	    }
	    if ( n==2){
	        a[0]=2;
	        a[1]=1;
	    }
	    for(int i =0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
