#include<stdio.h>
int main()
{
    int a,b,s;
    printf("enter number");
    scanf("%d%d", &a,&b);
    printf("enter 1 add or 2 sub or 3 multi or 4 div or 5 mod");
    scanf("%d",&s);
    if (s==1)
    {
        printf("sum=%d", a+=b);
    }
    else if(s==2)
    {
        printf("sub=%d", a-=b);
    }
    else if(s==3)
    {
        printf("multi=%d", a*=b);
    }
    else if(s==4)
    {
        printf("div=%d", a/=b);
    }
    else
        printf("mod=%d", a%=b);
    return 0;
}
