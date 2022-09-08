#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int arrang(int n, int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    int x,y,z;
    printf("Enter two Number");
    scanf("%d%d",&x,&y);
    z=arrang(x,y);
    printf("Arrangement is %d",z);
}
