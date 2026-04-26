#include<stdio.h>
//0 1 1 2 3 5
int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);

}
int main()
{
     int n,i;
    printf("Fibonacci number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ", fibo(i));
    }
}
