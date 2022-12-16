#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion4
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}