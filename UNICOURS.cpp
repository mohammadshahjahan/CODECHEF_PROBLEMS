#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int max = -1;
	    for(int i =0;i<n;i++){
	        if(a[i]>max){
	            max= a[i];
	        }
	    }
	    int c;
	    c= n - max;
	    cout<<c<<endl;
	}
	return 0;
}
