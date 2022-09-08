#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int comb(int n, int r)
{
    return fact(n)/(fact (r)*fact(n-r));
}
int main()
{
    int x,y,z;
    printf("Enter two Number");
    scanf("%d%d",&x,&y);
    z=comb(x,y);
    printf("Combination is %d",z);
}