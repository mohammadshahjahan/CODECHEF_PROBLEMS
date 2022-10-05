#include <bits/stdc++.h>
using namespace std;
#define long long ll 
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i =1;i<=n;i++){
            if(i==1 || i==n){
                cout<<3;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}