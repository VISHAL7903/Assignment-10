#include<stdio.h>
float area(float);
int main()
{
    float a,z;
    printf("Enter the radius");
    scanf("%f",&a);
    z=area(a);
    printf("Area of Circle is %f",z);
    return 0;
}
float area(float b)
{
    float s,v;
    v=3.14;
    s=v*b*b;
    return s;
}