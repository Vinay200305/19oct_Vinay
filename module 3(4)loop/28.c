#include <stdio.h>
int main() {
    int a=1, b=2, i, n;
    printf("Enter term of no = ");
    scanf("%d",&n);
    printf("%d %d ",a, b);
    for(i=3;i<=n;i++)
    {
        if(i%2==1)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*3;
            printf("%d ",b);
        }
    }
    return 0;
}
