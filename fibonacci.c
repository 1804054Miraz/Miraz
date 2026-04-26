#include<stdio.h>
void fib(int n)
{
    int a,b,i,c;
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("\n");
    return;
}
int main()
{
    //1 1 2 3 5 8
    int n;
    printf("Fibonacci number:");
    scanf("%d",&n);
    fib(n);
}
