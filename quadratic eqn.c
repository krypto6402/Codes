#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,x1,x2;
    printf("\t\t Standard form of equation is ax^2+bx+c=0 ");
    printf("\nEnter first constant (a) : ");
    scanf("%d",&a);
    printf("\nEnter second constant (b) : ");
    scanf("%d",&b);
    printf("\nEnter third constant (c) : ");
    scanf("%d",&c);
     d=b*b-4*a*c;
    x1=((-b)+pow(d,0.5))/2*a;
    x2=((-b)-pow(d,0.5))/2*a;
    printf("\nFirst solution of equation is %f ",x1);
    printf("\nSecond solution of equation is %f ",x2);
    return 0;
}

