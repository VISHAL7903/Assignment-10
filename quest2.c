#include<stdio.h>
float simpleinterest(float,float,float);
int main()
{
    float p,t,r,x;
    printf("Enter the Principle \n");
    printf("Enter the Time \n");
    printf("Enter the Rate \n");
    scanf("%f%f%f",&p,&t,&r);
    x=simpleinterest(p,t,r);
    printf("Simple Interest is = %f",x);
    return 0;
}
float simpleinterest(float a, float b, float c )
{
    float simpleinterest;
    simpleinterest=a,b,c;
    simpleinterest= a*b*c/100;
    return simpleinterest;
}
