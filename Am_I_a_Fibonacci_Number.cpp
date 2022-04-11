#include <bits/stdc++.h>
using namespace std;
int brr_size=0,prev_size=0,curr_size=0;
void add(int *curr,int *prev)
{
    int m=curr_size;
    int n=prev_size;
    int carry=0;
    for(int j=0;j<m;j++)
    {
        
    }
    int i;
    for(i=0;i<m;i++)
    {
        int sum=carry+curr[i]+prev[i];
        carry=sum/10;
        curr[i]=sum%10;
    }
    while(carry!=0)
    {
        curr[i++]=carry%10;
        carry=carry/10;
    }
    curr_size=i;
}
void subtract(int *curr,int *prev)
{
    int m=curr_size;
    int n=prev_size;
    int i;
    for(i=0;i<m;i++)
    {
        if(curr[i]<prev[i])
        {
            curr[i+1]--;
            curr[i]+=10;
        }
        prev[i]=curr[i]-prev[i];
    }
    i=m-1;
    prev_size=m;
    while(prev[i]==0)
    {
        prev_size=i;
        i--;
    }
}
int compare(int *brr,int *prev)
{
     if(brr_size>prev_size) return 1;
     else if(brr_size<prev_size) return -1;
     else
     {
         for(int i=0;i<prev_size;i++)
         {
             if(brr[i]>prev[i]) return 1;
             else if(brr[i]<prev[i]) return -1;
         }
         return 0;
     }
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        char arr[1000];
        cin>>arr;
        int n=strlen(arr);
        int brr[n+1]={0};  // target elements array
        int prev[n+1]={0}; // 
        int curr[n+1]={1};
        brr_size=n;
        prev_size=1;
        curr_size=1;
        for(int i=0;i<n;i++)
        {
            brr[n-1-i]=arr[i]-'0';
        }
        int carry=0;
        while(true)
        {
            if(compare(brr,prev)==0) 
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(compare(brr,prev)==1)
            {
                add(curr,prev);
                subtract(curr,prev);
            }
            else 
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}