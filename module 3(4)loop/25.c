#include <stdio.h>
int main() {
    int n, sum = 0,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("(%d*%d)",i,i);
        if(i!=n)
			printf(" + ");
    }
    return 0;
}
