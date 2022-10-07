#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{  
 if(n>=1)
 return n* fact(n-1);
 
 else 
 return 1;
}

int main() {
	// your code goes here
	int a;
cin>>a;
cout<<fact(a);
	return 0;
}
