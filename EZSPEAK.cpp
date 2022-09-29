#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	 string s; cin>>s;
	 if(s.length()<4){
	     cout<<"YES"<<endl;
	 } 
	 else{
	     int c=0,a=0;
	     for(int i =0;i<s.length();i++){
	         if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
	             
	             c=0;
	         }
	         else{
	             c++;
	             a=max(c,a);
	         }
	     }
	     if(a>=4){
	         cout<<"NO"<<endl;
	     }
	     else{
	         cout<<"YES"<<endl;
	     }
	 }
	}
	return 0;
}
