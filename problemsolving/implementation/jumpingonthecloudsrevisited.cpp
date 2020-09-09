#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,e=100;
    cin>>n>>k;
    int c[n];
    for(i=0;i<n;i++) cin>>c[i];
    i = k % n;
    e-=c[i] * 2 + 1; 
    while (i != 0)
    {
       i = (i + k) % n;
       e -= c[i] * 2 + 1;
    }
    cout<<e;
}
