#include<stdio.h>
int main()
{   int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of column : ");
    scanf("%d",&n);
    int arr[m][n],i,j,sc,sr,sd=0,sf=0;
    printf("Enter array\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
       scanf("%d",&arr[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
       printf("%d ",arr[i][j]);
      }printf("\n");
    }
    
    for(i=0;i<m;i++)
    { sr=0;
      for(j=0;j<n;j++)
      {
        sr=sr+arr[i][j];
        if(i==j)
          sd=sd+arr[i][j];
      }
      printf("Sum of row %d is %d\n",i+1,sr);

    }
    if(m==n)
    printf("Sum of downward diagonal is %d\n",sd);

    for(i=0;i<m;i++)
    { sc=0;
      for(j=0;j<n;j++)
      { sc=sc+arr[j][i];

        if(i+j == m-1)
          sf=sf+arr[i][j];
      }

      printf("Sum of column %d is %d\n",i+1,sc);
    }
    if(m==n)
    printf("Sum of upward diagonal is %d\n",sf);

    return 0;
}

