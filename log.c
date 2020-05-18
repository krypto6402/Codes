#include<stdio.h>
int main()
{
int bs,no,f=0;
scanf("%d%d",&no,&bs);
if(no==0)
 printf("Not defined");
else if(no==1)
 printf("%d",f);
else
{
 while(no%bs==0)
 {
  no=no/bs;
  f++;
 }
 printf("%d",f);
}
return 0;
}
