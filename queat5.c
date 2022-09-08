#include<stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d Odd Number \n",i);
    }
}