#include<stdio.h>
int main()
{
 int i,j,k;
 char a[30],b[30];
 puts("enter your name : ");
 gets(a);

 printf("\nyour name in short is : \n\n%c",a[0]);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
   printf(".%c",a[i+1]);
 }
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
   for(j=i,k=0;a[j]!='\0';j++,k++)
    b[k]=a[j];
 }

 b[k]='\0';

 for(i=2;b[i]!='\0';i++)
  printf("%c",b[i]);
  return 0;
}
