#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b value:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
    c=a/b;
    printf("%d/%d=%d\n",a,b,c);
    c=a%b;
    return 0;
}
