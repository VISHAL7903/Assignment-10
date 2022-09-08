#include<stdio.h>
int fun(int);
int main()
{
    int x,y;
    printf("Enter the number \n");
    scanf("%d",&x);
    y=fun(x);
    printf("factorial of %d",y);
    return 0;   
}
    int fun(int n)
    {
        int fact=1;
        for (int i=1;i<=n;i++)
        fact=fact*i;  
        return fact;
    }

