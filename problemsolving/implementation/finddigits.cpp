#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,a,m; 
        vector<int> digits;
        cin>>n;
        m=n;
        while(m!=0)
        {
            a=m%10;
            if(a!=0) digits.push_back(a);
            m/=10;
        }
        int c=0;
        for(int i=0;i<digits.size();i++)
        {
             if(n%digits[i]==0) c++;
        }
        cout<<c<<endl;
    }

}
