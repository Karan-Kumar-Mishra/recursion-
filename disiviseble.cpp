#include<iostream>
#include<stdio.h>
using namespace std;
int disiviseble(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<disiviseble(n,a,b)<<endl;

    return 0;
}