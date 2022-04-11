#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    string arr[k];
    string brr[n];
    for(int i=0;i<k;i++)
    {
        getline(cin,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        getline(cin,brr[i]);
    }
    // for(int i=0;i<k;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<brr[i]<<" ";
    // }
    
    // for(int i=0;i<n;i++)
    // {
    //     getline(cin,brr[i]);
    //     if(brr[i].length()>=47) brr[i]="Good";
    //     else 
    //     {
    //         bool isFound=false;
    //         for(int j=0;j<k;j++)
    //         {
    //             if(brr[i].find(arr[j])!=string::npos)
    //             {
    //                 brr[i]="Good";
    //                 isFound=true;
    //                 cout<<j<<"**"<<brr[i].find(arr[j])<<endl;
    //                 break;
    //             }
    //         }
    //         if(!isFound) brr[i]="Bad";
    //     }
    // }
    
    return 0;
}