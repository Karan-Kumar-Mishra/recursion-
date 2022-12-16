#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion3
int fact(int n)
{
  if(n==0)
  {
   return 1;
  }
  return n*fact(n-1);
}
int main()
{
   int n;
   cin>>n;
   cout<<fact(n)<<endl;
    return 0;
}