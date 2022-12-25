#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//recursion12
string removedub(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=removedub(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return ch+ans;
}
int main()
{
    clog<<removedub("aaaabbbeeecddd");

    return 0;
}