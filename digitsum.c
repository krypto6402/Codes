#include<stdio.h>
int main(void)
{
int T,N,rem,sum=0;
scanf("%d",&T);

while(T--)
{
scanf("%d",&N);
while(N!=0)
{
rem=N%10;
N=N/10;
sum=sum+rem;
}
printf("Sum --> %d\n",sum);
sum=0;
}
}
