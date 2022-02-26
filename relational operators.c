#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    printf("%d==%d is %d",a,b,a==b);
    printf("\n%d>%d is %d",a,b,a>b);
    printf("\n%d<%d is %d",a,b,a<b);
    printf("\n%d>=%d is %d",a,b,a>=b);
    printf("\n%d<=%d is %d",a,b,a<=b);
    printf("\n%d!=%d is %d",a,b,a!=b);
    return 0;
}
