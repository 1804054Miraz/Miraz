#include<stdio.h>
//1234
int dig_sum(int n)
{
    if(n==0)
        return 0;
    return (n%10) + dig_sum(n/10);
}
int main()
{
    int i,n;
    scanf("%d",&n);

    printf("%d\n",dig_sum(n));
}

