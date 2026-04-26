#include<stdio.h>
//8 6
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    int i,a,b,r;
    printf("Find GCD of two numbers:");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    printf("GCD = %d\n",gcd(a,b));


}

