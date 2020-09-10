#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int multiplication_array(int m,int fac[],int size);

void calculate_factorial(int n)
{
    int fac[200],size;
    fac[0]=1,size=1;
    for(int i=2;i<=n;i++)
    {
        size=multiplication_array(i,fac,size);
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<fac[i];
    }

}
int multiplication_array(int m,int fac[],int size)
{
    int p,c=0; //c is the  carry
    for(int i=0;i<size;i++)
    {
        p=fac[i]*m+c;
        fac[i]=p%10; //to store the last digit after each multiplication
        c=p/10; //transfer the remainder to carry
    }
    while(c!=0)
    {
        fac[size]=c%10;
        c/=10;
        size++;
    }
    return size;
}


int main()
{
     int t;
     cin>>t;
     calculate_factorial(t);

}
