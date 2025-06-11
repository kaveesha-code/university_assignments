#include<stdio.h>

void main()
{
    float a,b,c,d,e,f,g,h,i,result;
    printf("value of a :");
    scanf("%f",&a);
    printf("value of b :");
    scanf("%f",&b);
    printf("value of c :");
    scanf("%f",&c);
    printf("value of d :");
    scanf("%f",&d);
    printf("value of e :");
    scanf("%f",&e);
    printf("value of f :");
    scanf("%f",&f);
    printf("value of g :");
    scanf("%f",&g);
    printf("value of h :");
    scanf("%f",&h);
    printf("value of i :");
    scanf("%f",&i);    
    result = a*(117*b*c + d + 2*e)/(f - g)*(h / i);
    printf("result is : %3f",result);
       
}