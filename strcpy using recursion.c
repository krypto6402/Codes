#include<stdio.h>
void rec(int j,char arr1[],char arr2[])
{
    if(arr1[j]!='\0')
    {
        arr2[j]=arr1[j];
        rec(j+1,arr1,arr2);
    }
    else
    {
        arr2[j]='\0';
        puts(arr2);
    }
}
int main()
{
    int i,j=0;
    char arr1[50],arr2[50];
    gets(arr1);
    rec(j,arr1,arr2);
    return 0;
}
