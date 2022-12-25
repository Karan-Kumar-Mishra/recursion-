#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
//recursion8
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int rest=lastocc(arr,n,i+1,key);
    if(rest!=-1)
    {
        return rest;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]= {4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;
    return 0;
}