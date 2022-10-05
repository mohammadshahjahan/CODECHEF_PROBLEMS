#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s; cin>>s;
	    string t;
	    string str1 = "0";
	    string str2 = "1";
	    int turn = 1;
	    
	    if(s.length()%2==0){
	        
	    
	    for(int i =0;i<s.length()/2;i++){
	        
	            if(s[i]=='0'){
	                t.insert(0,1,'0');
	            }
	            else{
	                t.append(str2);
	            }
	            
	        
	        
	            if(s[s.length()-1-i]=='1'){
	                t.insert(0,1,'1');
	            }
	            else{
	                t.append(str1);
	            }
	            
	        
	    }
	    
	    cout<<t<<endl;
	    }
	    else{
	        for(int i =0;i<s.length()/2;i++){
	        
	            if(s[i]=='0'){
	                t.insert(0,1,'0');
	            }
	            else{
	                t.append(str2);
	            }
	            
	        
	        
	            if(s[s.length()-1-i]=='1'){
	                t.insert(0,1,'1');
	            }
	            else{
	                t.append(str1);
	            }
	            
	        
	    }
	    if(s[s.length()/2]=='0'){
	      t.insert(0,1,'0');
	            }
	    else{
	        t.append(str2);
	            }
	    cout<<t<<endl;
	    }
	}
	return 0;
}
