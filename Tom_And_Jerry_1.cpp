#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int count=abs(c-a);
        count+=abs(d-b);
        if(k<count) cout<<"NO"<<endl;
        else
        {
            count-=k;
            if(count%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}