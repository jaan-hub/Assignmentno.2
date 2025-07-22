#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");
    scanf("%d",&c);
    if(a>b && a<c)
    printf("%d is in between %d and %d",a,b,c);
    else if(b>a && b<c)
    printf("%d is in between %d and %d",b,a,c);
    else
    printf("%d is in between %d and %d",c,a,b);
 return 0;
}