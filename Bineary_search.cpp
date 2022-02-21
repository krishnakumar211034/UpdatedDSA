#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the Array: ";
    int n;
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the element to search in Array: ";
    int element;
    cin>>element;
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==element) 
        {
            cout<<element<<" is present at "<<mid;
            return 0;
        }
        else if(arr[mid]>element) right=mid-1;
        else left=mid+1;
    }
    cout<<element<<"is not present.";
    return 0;
}