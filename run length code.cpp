#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int i,j=1;char c=src[0];int n=src.length();string g="";
  for(i=0;i<n;i++)
  {if(src[i+1]==src[i])
  {
      j++;}
      else
      {cout<<c<<j;
      
      c=src[i+1];
      j=1;
      }
  }
      
     
  }
 
