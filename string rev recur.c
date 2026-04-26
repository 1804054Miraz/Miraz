#include<stdio.h>
#include<string.h>
void string_rev(int len, char *str)
{
        if(len<0)
        {
           return;
        }
       //  printf("%d\n",len);
        printf("%c",str[len]);
        string_rev(len-1, str);


}
int main()
{
    char str[]="Zakir";
    int i, n;
    int len = strlen(str);
   // printf("%d\n",len);
    string_rev(len-1, str);
    printf("\n");
}


