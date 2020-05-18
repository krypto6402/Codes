#include<stdio.h>
#define m 100
void main()
{
char arr1[m],arr2[m];
scanf("%s",&arr1);
int len=0;
while(arr1[len]!='\0')
{
len++;
}
for (int i=0,j=len-1;j>=0,i<len;j--,i++)
{
arr2[i]=arr1[j];

}
printf("%s",arr2);
}

//USING RECURSION
/*
#include<stdio.h>
void reverse(char a[], int x, int y)
{
   char c;

   if (x >= y)
      return;
   else
   {
   c = a[x];
   a[x] = a[y];
   a[y] = c;
   }
   reverse(a, ++x, --y);
}
int main()
{
   char a[100];
   int i;
   gets(a);
   for(i=0;a[i]!='\0';i++);
   reverse(a, 0, i-1);
   printf("%s\n", a);
   return 0;
}

*/
