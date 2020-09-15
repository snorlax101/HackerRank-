#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    string s;
    long long int n,l,a=0,b=0;
    getline(cin,s); l=s.length();
    cin>>n;

        for(long long int i=0;i<l;i++)
        {
            if(s[i]=='a') a++;
            if(i<n%l && s[i]=='a') b++;
        }
   
        cout<<n/l*a+b<<endl;
    
}
