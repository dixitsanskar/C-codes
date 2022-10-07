#include <bits/stdc++.h>
using namespace std;
bool pal(int n)
{  int c=n,sum=0;
 while(n!=0)
 {
     int t=n%10;
     sum=(sum*10)+t;
     n=n/10;
 }
 if(c==sum)
 return true;
 return false;
 
 

}

int main() {
	// your code goes here
	int a;
cin>>a;
if(pal(a)==true)
cout<<"palindrome";
else
cout<<"not palindrome";
	return 0;
}
