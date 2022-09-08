#include<stdio.h>
int check(int);
int main()
{
    int x,a;
    printf("Enter the number");
    scanf("%d",&x);
    a=check(x);
    if(a==1)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
    return 0;
}
int check(int n)
{
    int check;
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
