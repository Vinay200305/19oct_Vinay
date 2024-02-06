#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day, month;
    printf("enter day");
    scanf("%d", &day);
    month=day/30;
    printf("day into month %d", month);
    return 0;



}
