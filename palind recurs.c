#include<stdio.h>
int palind(int rev, int n)
{
    if(n==0)
        return rev;
    return palind(rev*10+n%10, n/10);
}
//1234 1221 12
int main()
{
    int n;
    scanf("%d",&n);
    int rev,temp;
    temp=n;
    rev=0;
    rev = palind(rev, n);
    if(n==rev)
        printf("Palindrom\n");
    else
        printf("Not Palindrome\n");
    printf("%d %d", n, rev);
}


