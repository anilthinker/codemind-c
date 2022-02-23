#include <stdio.h>
int main()
{
    int num,rem,reverse=0;
    scanf("%d",&num);
    for(;num!=0; num=num/10)
    {
        rem=num%10;
        reverse=reverse*10+rem;
    }
    printf("%d",reverse);
    return 0;
}