#include<stdio.h>
//1234 1221
int main()
{
    int n;
    scanf("%d",&n);
    int rev,temp;
    temp=n;
    rev=0;
    while(temp)
    {
        rev = rev*10+temp%10;
        temp=temp/10;
    }
    if(n==rev)
        printf("Palindrom\n");
    else
        printf("Not Palindrome\n");
    printf("%d %d", n, rev);
}

