#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem;
        rem=a%b;
        a=b;
        b=rem;

    }
    return a;
}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}