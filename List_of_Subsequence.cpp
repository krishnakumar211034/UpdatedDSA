#include <iostream>
#include <vector>
using namespace std;
void swap(int* arr,int i,int j)
{
    int temp=*(arr+i);
    *(arr+i)=*(arr+j);
    *(arr+j)=temp;
}
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
        for(int j=i;j<n;j++)
        {
            cout<<"{";
            for(int k=i;k<=j;k++)
            {
                if(k==j) cout<<arr[k]<<"";
                else cout<<arr[k]<<",";
            }
            if(j!=n-1) cout<<"},";
            else cout<<"}";
        }
        cout<<endl;
    }
    return 0;
}