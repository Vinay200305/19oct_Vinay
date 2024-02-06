#include<stdio.h>
int main()
{
    int marks;
    printf("enter subject marks:");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("you are pass.");
    }
    else
    {
        printf("you are fail.");
    }
    return 0;
}
