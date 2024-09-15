#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(isPrime(i)){
                ans.push_back(i);
            }
        }
    for(auto i:ans) cout<<i<<" ";
}