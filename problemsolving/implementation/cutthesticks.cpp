#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    vector<int> a; 
    
    for(unsigned i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    
    while(!a.empty())
    {
        cout<<a.size()<<endl;
        y=a[0];
        a.erase(std::remove(a.begin(), a.end(), y), a.end());
        for(unsigned i=0;i<a.size();i++)  a[i]-=y;
   
    }
}
