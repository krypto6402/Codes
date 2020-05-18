#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    printf("\nEnter third number : ");
    scanf("%d",&c);
    if( a<=b && a<=c)
    { 
        printf("  %d",a);
        if(b<=c)
        printf("%d %d",b,c);
        else
        printf("%d %d",c,b);        
    }
    if( b<=a && b<=c)
    { 
        printf("  %d",b);
        if(a<=c)
        printf("%d %d",a,c);
        else
        printf("%d %d",c,a);        
    }
    if( c<=a && c<=b)
    { 
        printf("  %d",c);
        if(a<=b)
        printf("%d %d",a,b);
        else
        printf("%d %d",b,a);        
    }
    
 
    return 0;
}
