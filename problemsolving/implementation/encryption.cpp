#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string sen,ws,ns="";
    getline(cin,sen);
    int l=0;
    for(unsigned i=0;i<sen.length();i++)
    {
        if(sen[i]!=' ')
        {
            ws+=sen[i];
            l++;
        }

    }
    float sl= sqrt(l);
    int r=floor(sl);
    int c=ceil(sl);

    vector<string> v;
    for(int i=0;i<c;i++)
    {
        if(r<c) r++;
        for(int j=i;j<l;j+=r)
        {
            ns+=ws[j];
        }
        v.push_back(ns);
        ns="";
    }
     for(int i=0;i<c;i++) cout<<v[i]<<" ";


}
