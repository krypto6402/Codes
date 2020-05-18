#include<stdio.h>
void median(int a[],int n)
{
int i,j,t;
 for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
    {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
   }
  }
 float x=0.0;
 if(n%2==0)
 x=(float)(a[n/2]+a[(n-1)/2])/2;
 else
 x=a[(n-1)/2];
 printf("\nThe Median is: %f",x);
}
void range(int a[],int n)
{
 int big=a[0],small=a[0];
 for(int i=0;i<n;i++)
 {
 if(a[i]>big)
 big=a[i];

 if(a[i]<small)
 small=a[i];
 }
  printf("\nThe Range is : %d",(big-small));
}
int main()
 {
 int n,i;
 printf("How many values:");
 scanf("%d",&n);
 int a[n];
 printf("\nEnter the observations\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
median(a,n);
range(a,n);
return 0;
}
