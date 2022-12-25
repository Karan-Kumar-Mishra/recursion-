#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//recursion13
string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));
    if(ch=='x' or ch=='X')
    {
        return ans+ch;
    }
    return ch+ans;
}
int main()
{
    cout<<moveallx("aXxddxcefxxhix");

    return 0;
}