#include<bits/stdc++.h>
using namespace std;
int main()
{
   int start,end;
   cin>>start>>end;
   for(int i=1;i<=end;i++)
   {
    for(int j=start;j<=end;j++)
    {
        cout<<j<<" * "<<i<<" = "<<(i*j)<<"   ";
    }
    cout<<endl;
   }
}