#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    vector<long long int> v;
    map<long long int,long long int> m;
    for(auto i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        m[x]++;
    }
    long long int c=-1e18;
    for(auto it:m) c=max(c,it.second);
    
    cout<<n-c<<endl; 
}
