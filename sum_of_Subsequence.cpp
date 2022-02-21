#include <iostream>
using namespace std;
int main()
{
    cout<<"List Of Subsequence"<<endl;
    cout<<"Enter the size of the Array: ";
    int n;
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
        sum=0;
    }
    return 0;
}