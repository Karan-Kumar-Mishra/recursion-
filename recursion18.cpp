#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
using namespace std;
//recursion18
int countpath(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count=0;
    for(int i=1; i<6; i++)
    {
        count+=countpath(s+i,e);
    }
    return count;
}
int main()
{
    cout<<countpath(0,3)<<endl;
    return 0;
}