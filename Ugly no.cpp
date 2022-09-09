#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	ull a[n];a[0]=1;
	ull k1=0,k2=0,k3=0;
	ull c,i,a1=2,a2=3,a3=5;
	for( i=1;i<n;i++)
	{
	    c=min(a1,(min(a2,a3)));
	    a[i]=c;
	    if(c==a1)
	    {
	        k1+=1;
	        a1=a[k1]*2;
	    }
	    if(c==a2)
	    {
	        k2+=1;
	        a2=a[k2]*3;
	    }
	     if(c==a3)
	    {
	        k3+=1;
	        a3=a[k3]*5;
	    }
	 
	}return c;

	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
