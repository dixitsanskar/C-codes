#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
	    for(int j=1;j<=i;j++)
	    {
	        cout<<j;
	    }
	    for(int k=n;k>i;k--)
	    {
	        cout<<" ";
	        
	    }
	    for(int h=n-1;h>i;h--)
	    {
	        cout<<" ";
	        
	    }
	    int k=0;
	    if(i==n)
	    k=1;
	    for(int g=i-k;g>=1;g--)
	    {
	       
	        cout<<g;
	    }
	 
	    cout<<endl;
	}
	return 0;
}
