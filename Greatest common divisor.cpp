class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.length();
        int b=str2.length();
        string st1=str1+str2;string st2=str2+str1;string st3;int k=__gcd(a,b);
        
        if(st1==st2)
        {
            st3=str1.substr(0,k);
            return st3;
        }
        return "";
        
    }
};
