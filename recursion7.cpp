#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//recursion7
//print number into increasing order
void  inc(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";

}
int main()
{
    int n;
    cin>>n;
    inc(n);
    return 0;
}