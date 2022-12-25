#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//recursion11
void towerofhanoi(int n,char src,char des,char helper)
{
  if(!n)
  {
  return ;
  }
  towerofhanoi(n-1,src,helper,des);
  cout<<"Move from "<<src<<" to "<<des<<endl;
  towerofhanoi(n-1,src,des,helper);
}
int main()
{  
   towerofhanoi(3,'A','C','B'); 
    return 0;
}