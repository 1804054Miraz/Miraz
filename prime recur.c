#include<stdio.h>
#include<math.h>
//4 5
int prime_check(int i, int n)
{
    if(i*i>n)
        return 1;
    else if(n%i==0)
        return 0;

    //printf("%d\n",i);
    return prime_check(i+1, n);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    i=1;
    i=prime_check(2,n);
   if(i==0)
        {
            printf("Not prime\n");
        }
    else
        printf("prime\n");
}

