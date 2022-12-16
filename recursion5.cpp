#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion5
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return 1;
    }
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}
int main()
{
    int arr[]= {1,2,3,4,5,6};
    cout<<sorted(arr,6);
    return 0;
}