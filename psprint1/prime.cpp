//checking for prime number

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    cout<<((flag)?"Not Prime" : "Prime")<<endl;


    //for(int i=2;i*i<=n;i++)   if(n%i==0) return false;   
    //checking in sqrt because if n is divisible by any number that is only half it number 
    //ex - if 36 is a number only till 6 ..  1*32 , 2*18,  3*12 , 4*9 , 6*6  only these can be factors . 
    //So, while checking from 2 to the sqrt(N), if we find a number that is a factor of the N, it would mean that the number has more than 2 factors, so that number would not be a prime number. Otherwise, if we do not find any factor of N, that implies that the N has only 2 factors, 1 and itself, thus it is a prime number

    return 0;
}