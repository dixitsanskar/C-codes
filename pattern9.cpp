#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {cout<<(char)('A'+n-1-i+j);
	        
	    }cout<<endl;
	}
	
	return 0;
}
