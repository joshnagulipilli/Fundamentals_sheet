#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int vowel=0,cons=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'   )
        {
            vowel++;
        }
        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ) cons++;
    }
    cout<<vowel<<" "<<cons;

}