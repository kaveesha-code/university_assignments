#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value for a: ");
    scanf("%d",&a);
    printf("Enter value for b: ");
    scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d mod %d = %d\n",a,b,a%b);
    if(b != 0)
    {
        printf("%d / %d = %d\n",a,b,a/b);
    }    
    if(a%2 != 0)
    {
        printf("a is odd\n");
    }
    else
    {
        printf("a is even\n");
    }
    if(b>0)
    {
        printf("b is positive\n");
    }
    else if(b<0)
    {
        printf("b is negative\n");
    }


}