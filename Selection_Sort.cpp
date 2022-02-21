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
    cout<<"Selection sort"<<endl;
    cout<<"Enter the size of the Array: ";
    int n;
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j]) min=j;
        }
        if(min!=i) swap(arr,i,min);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}