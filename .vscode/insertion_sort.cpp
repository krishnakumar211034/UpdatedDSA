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
    cout<<"Insertion sort"<<endl;
    cout<<"Enter the size of the Array: ";
    int n;
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}