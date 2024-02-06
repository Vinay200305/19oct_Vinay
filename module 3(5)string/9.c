#include <stdio.h>

int main() {
    char str[100];
    int mchar;
    printf("Enter a string: ");
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && i < sizeof(str) - 1){
        str[i++] = ch;
    }

    str[i] = 0;
    mchar = i;
    printf("\nMaximum number of characters in the string: %d", mchar);
    return 0;
}
