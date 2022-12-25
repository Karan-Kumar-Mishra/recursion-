#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//recursion10
void replacepi(string s)
{
    if(!s.length())
    {
        return ;
    }
    if(s[0]=='p' and s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
int main()
{
    replacepi("pippxxppiixipi");
    return 0;
}