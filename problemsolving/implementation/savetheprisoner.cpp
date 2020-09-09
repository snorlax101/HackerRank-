#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int seat,r;
        r=m%n;
        if((r+s-1)%n==0) seat=n;
        else seat=(r+s-1)%n;
        cout<<seat<<endl;

    }
}
