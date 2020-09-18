#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int countBitwiseOr(string s1, string s2)
{
    bitset<500> b1(s1);
    bitset<500> b2(s2);
    return (b1 | b2).count();
}

int main()
{
    int n,m,maximum=0,c=0;
    string x;
    vector<string> v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
                 if (maximum<countBitwiseOr(v[i],v[j])) 
                 {
                     maximum=countBitwiseOr(v[i],v[j]);
                     c=1;
                 } 
                 else if(countBitwiseOr(v[i],v[j])==maximum) c++;
             
         }
    }
    cout<<maximum<<endl;
    cout<<c<<endl;
     
}
