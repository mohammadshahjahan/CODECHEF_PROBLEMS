#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=1;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i] == '1' && s[i+1] == '0')
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;

	}
	return 0;
}
