#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion6
//print number into decreasing order
void  dec(int n)
{
    if(!n)
    {
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    dec(n);
    return 0;
}