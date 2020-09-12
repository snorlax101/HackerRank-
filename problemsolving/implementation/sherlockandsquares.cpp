#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a,b,c=0,i;
        cin>>a>>b;
        for(i=ceil(sqrt(a));i<=floor(sqrt(b));i++) c++;

        cout<<c<<endl;
    }
}
