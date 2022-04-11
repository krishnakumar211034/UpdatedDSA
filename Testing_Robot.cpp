#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,x;
        cin>>n>>x;
        char *ptr;
        ptr=(char*)malloc((n+1)*sizeof(char));
        cin>>ptr;
        unordered_set<int> ss;
        ss.insert(x);
        for(int i=0;i<n;i++)
        {
            if(*(ptr+i)=='R') x++;
            else x--;
            ss.insert(x);
        }
        cout<<ss.size()<<endl;
    }
    return 0;
}