#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    sum=0;
    while(n)
    {
        sum = sum+ n%10;
        n=n/10;
    }
    printf("%d\n",sum);
}
