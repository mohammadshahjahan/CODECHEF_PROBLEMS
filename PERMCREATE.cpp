#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int m;cin>>m;
	    if(m<=3){
	        cout<<"-1"<<endl;
	    }
	    else if(m==4){
	        cout<<"3 1 4 2"<<endl;
	    }
	    else{
	        for(int j =1;j<=m;j+=2){
	            cout<<j<<" ";
	        }
	        for(int j =2;j<=m;j+=2){
	            cout<<j<<" ";
	        }
	        
	        cout<<endl;
	    }
	}
	return 0;
}
