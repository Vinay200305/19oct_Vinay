#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("%d/%d", i, i + 1);
        if(i<n) {
            if (i % 2 == 0) {
                printf(" + ");
            }
			else {
                printf(" - ");
            }
        }
    }
    return 0;
}
