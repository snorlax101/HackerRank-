#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int  i=0,c=0;
    while(i<n-1)
    {
        if(i+2==n || v[i+2]==1) i++;
        else i+=2;
        c++;
    }
    cout<<c;
}
