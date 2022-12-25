#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//recursion9
void reverse(string s)
{
    if(!s.length())
    {
        return ;
    }
    reverse(s.substr(1));
    cout<<s[0];
}
int main()
{
    reverse("karan");
    return 0;
}