#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool p=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) p=0;
        else p=!p;
        for(int j=0;j<n;j++)
        {
            cout<<p;
            p= p ^ 1; //toggle between p 0 and 1;  
        }
        cout<<endl;   // cannot use ~p since it performs bitwise not operation;  00 --> 11 which is 3 
    }
}