#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string arr[t];
    cin.get();
    for(int i=0;i<t;i++)
    {
        getline(cin,arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        int pos=arr[i].find("party",0);
        while(pos!=(string :: npos) && (pos+4)<arr[i].length() )
        {
            cout<<"**"<<pos<<endl;
            arr[pos+2]='w';
            arr[pos+3]='r';
            arr[pos+4]='i';
            pos=arr[i].find("party",pos+5);
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}