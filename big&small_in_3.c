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

// SMALL
/*
#include <stdio.h> 
int main() 
{ 
    int a,b,c, small; 
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
      
    small = (a < b) ? (a < c ? a : c) : (b < c ? b : c); 
      
    printf("Smallest number among %d, %d and %d is %d.", a, b, c, small); 
  
    return 0; 
}
*/
