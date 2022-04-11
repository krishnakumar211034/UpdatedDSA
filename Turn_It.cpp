#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        int final=(u*u)-(2*a*s);
        if(final<=(v*v)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}