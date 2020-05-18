#include<stdio.h>
int main()
{
    int a,b,tmp;
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    tmp=a;
    a=b;
    b=tmp;
    int c;
    /*
    a=a+b;
    b=a-b;
    a=a-b;
    */    
    printf("\nFirst number after swap is : %d",a);
    printf("\nSecond number after swap is : %d",b);
    return 0;

}
