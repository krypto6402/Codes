#include<stdio.h>
int main()
{   int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of column : ");
    scanf("%d",&n);
    if(m==n)
    {
    int arr[m][n],i,j,sc,sr,sd=0,sf=0;
    printf("Enter array\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
       scanf("%d",&arr[i][j]);
      }
    }
    printf("Upper triangle\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          if(j>i)
       printf("%d ",arr[i][j]);
      }printf("\n");
    }
    printf("lower triangle\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          if(j<i)
       printf("%d ",arr[i][j]);
      }printf("\n");
    }
    }

    return 0;


}

