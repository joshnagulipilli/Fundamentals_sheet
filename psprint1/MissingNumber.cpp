#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>v;
     int a;
     while(cin>>a) //only terminates to take input when we give other than int value
     {
        v.push_back(a);
     }
     
     int maxi=*max_element(v.begin(),v.end());
     int sum=accumulate(v.begin(),v.end(),0);
     int ans=((maxi)*(maxi+1))/2;
     if(maxi==v.size()) {
        cout<<maxi+1;
     }else
        cout<<(ans-sum);
     
}