#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String: ";
    cin.getline(str,100);
    int start=0,end=0;
    int curr=0;
    int maxlength=0,length=0;
    while(str[curr]!='\0')
    {
        if(str[curr]!=' ' || str[curr]!='\0') 
        {
            length++;
        }
        else 
        {
            if(length>maxlength) 
            {
                maxlength=length;
            }
        }
        curr++;
    }
}