#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a='A';
    for(int i=0;i<n;i++)
    {
        if(i%2==0) a='A';
        else a='B';
        for(int j=0;j<n;j++)
        {
            cout<<a;
            if(a=='A') a='B'; //toggle between p 0 and 1; 
            else a='A'; 
        }
        cout<<endl;   // cannot use ~p since it performs bitwise not operation;  00 --> 11 which is 3 
    }
}