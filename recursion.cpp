#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion2
int power(int n,int p)
{
    if(!p)
    {
        return 1;
    }
    return (n*power(n,p-1));
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}