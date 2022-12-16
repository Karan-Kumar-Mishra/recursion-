#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion1
//find sum till n...
int sum(int n)
{
    if(!n)
    {
        return 0;
    }
    return (n+sum(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}