#include<stdio.h>
int main()
{
    int i,a,b,r;
    printf("Find GCD of two numbers:");
    scanf("%d %d",&a,&b);

    if(b>a)
    {
        r=a;
        a=b;
        b=r;
    }
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("GCD = %d\n",a);


}
