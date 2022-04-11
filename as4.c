// Krishna Kumar K
// 211IT034
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int length(char *arr)
{
    int i=0;
    while(*(arr+i)!='\0')
    { i++; }
    return i;
}
void Length()
{
    char arr[100];
    printf("Enter the String: ");
    scanf("%s",arr);
    int it034_i=0;
    while(*(arr+it034_i)!='\0')
    { it034_i++; }
    printf("Length of String \"%s\" is %d",arr,it034_i);
}
void Concatenation()
{
    char arr[100];
    char brr[100];
    printf("Enter the String A and B: ");
    scanf("%s %s",arr,brr);
    int it034_m,it034_n;
    it034_m=length(arr);
    it034_n=length(brr);
    for(int i=it034_m;i<=(it034_n+it034_m);i++)
    {
        *(arr+i)=*(brr+i-it034_m);
    }
    printf("String After Concatenation: %s",arr);
}
void Comparison()
{
    char arr[100];
    char brr[100];
    printf("Enter the String A and B: ");
    scanf("%s %s",arr,brr);
    int it034_n=min(length(arr),length(brr));
    int i;
    for(i=0;i<it034_n;i++)
    {
        int it034_Min=(int)(*(arr+i));
        int j=(int)(*(brr+i));
        it034_Min=it034_Min>96?(it034_Min-32):(it034_Min);
        j=j>96?(j-32):(j);
        if(it034_Min>j)
        {
            printf("%s is Lexicographically Greater than %s",arr,brr);
            return;
        }
        else if(it034_Min<j)
        {
            printf("%s is Lexicographically Greater than %s",brr,arr);
            return;
        }
    }
    if(*(arr+i)!='\0')
    {
        printf("%s is Lexicographically Greater than %s",arr,brr);
        return;
    }
    else if(*(brr+i)!='\0')
    {
        printf("%s is Lexicographically Greater than %s",brr,arr);
        return;
    }
    else 
    {
        printf("%s is Lexicographically Equal to %s",arr,brr);
        return;
    }
}
void Copy()
{
    char arr[100];
    char brr[100];
    *(brr)='\0';
    printf("Enter the String to be Copied: ");
    scanf("%s",arr);
    printf("Befor Copying \narr=\"%s\" \nbrr=\"%s\"\n",arr,brr);
    int i=0;
    do
    {
        *(brr+i)=*(arr+i);
        i++;
    } while (*(arr+i)!='\0');
    printf("After Copying \narr=\"%s\" \nbrr=\"%s\"",arr,brr);
}
void Reverse()
{
    char arr[100];
    printf("Enter the String to be Reversed: ");
    scanf("%s",arr);
    printf("Befor Reversing: %s\n",arr);
    int it034_n=length(arr);
    int it034_i=0,it034_j=it034_n-1;
    while(it034_j>it034_i)
    {
        char it034_temp=*(arr+it034_i);
        *(arr+it034_i)=*(arr+it034_j);
        *(arr+it034_j)=it034_temp;
        it034_i++;
        it034_j--;
    }
    printf("After Reversing: %s",arr);
}
int main()
{
    int it034_choice=1,*it034_ch=&it034_choice;
    printf("\n1) Concatenation\n2) Comparison\n3) Length\n4) Copy\n5) Reverse\n");
    printf("Enter The Operation Code: ");
    scanf("%d",it034_ch);
    switch(*it034_ch)
    {
        case 1: 
            Concatenation();
            break;
        case 2:
            Comparison();
            break;
        case 3:
            Length();
            break;
        case 4:
            Copy();
            break;
        case 5:
            Reverse(); 
            break;
    }
    return 0;
}