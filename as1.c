// Krishna Kumar K
// 211IT034
#include<stdio.h>
#include<stdbool.h>
struct pair
{
    char character;
    int count;
}it034_co[128];
int main()
{
    char it034_arr[100];
    printf("Enter the String: ");
    scanf("%s",it034_arr);
    char *it034_ptr=it034_arr;
    int i=0;
    int it034_size=0;
    while(*(it034_ptr+i)!='\0')
    {
        bool isFound=false;
        for(int j=0;j<it034_size;j++)
        {
            if(*(it034_ptr+i)==it034_co[j].character)
            {
                isFound=true;
                it034_co[j].count++;
                break;
            }
        }
        if(!isFound) 
        {
            it034_co[it034_size].character=*(it034_ptr+i);
            it034_co[it034_size].count=1;
            it034_size++;
        }
        i++;
    }
    for(int i=0;i<it034_size;i++)
    {
        printf("%c --> %d\n",it034_co[i].character,it034_co[i].count);
    }
    return 0;
}