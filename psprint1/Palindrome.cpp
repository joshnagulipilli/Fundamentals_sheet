// gives memory limit ;
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool fun(int low,int high,string s)
    {
        while(low<=high)
        {
            if(s[low]==s[high])
            {
                low++; high--;
            }
            else return false;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n=s.length(),p=0,q=0;
        int maxlength=INT_MIN;
        string str="";
        for(int i=0;s[i];i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int low=i,high=j;
                if(fun(low,high,s))
                {
                    if(maxlength<(high-low+1))
                    {
                        p=low,q=high;
                        maxlength=(q-p+1);
                    }
                }
            }
        }
        for(int i=p;i<=q;i++)
        {
            str+=s[i];
        }
        return str;
    }

};

int main()
{
  string s;
  cin>>s;
  Solution obj;
  cout<<obj.longestPalindrome(s)<<endl;
}
