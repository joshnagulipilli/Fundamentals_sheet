#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int large=INT_MIN;
    int small=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large) large=arr[i];
        if(arr[i]<small) small=arr[i];
    }
   


    //int large=*max_element(arr.begin(),arr.end());
    //int small=*min_element(arr.begin(),arr.end());
     cout<<large<<" "<<small;

    return 0;
}