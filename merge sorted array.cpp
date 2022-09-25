#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	int c[2*n];
	int i=0,j=0;int k=0;
	while(i<=n || j<=n)
	{
	    if(a[i]>=b[j])
	    {
	        c[k]=b[j];
	        j++;k++;
	    }
	    else
	    {
	        c[k]=a[i];
	        i++;k++;
	    }
	    
	}
	for(int i=0;i<2*n;i++)
	{
	    cout<<c[i]<<" ";
	}
	
	
	return 0;
}
