#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        pair<string,string> arr[n];
        cin.get();
        for(int i=0;i<n;i++)
        { 
            string temp;
           getline(cin,temp);
           stringstream str(temp);
           getline(str,arr[i].first,' ');
           getline(str,arr[i].second,' ');
        }
        unordered_map<string,int> mm;
        for(int i=0;i<n;i++)
        {
            if(mm.find(arr[i].first)==mm.end()) mm[arr[i].first]=1;
            else mm[arr[i].first]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mm.count(arr[i].first)!=1) cout<<arr[i].first<<" "<<arr[i].second<<endl;
            else cout<<arr[i].first<<endl;
        }
    }
    return 0;
}