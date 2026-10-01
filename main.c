#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the integer : ");
    scanf("%i", &n);

    if (n >= 0)
        printf("absolute value is %d.\n", n);
    else
        printf("absolute value is %d.\n", -n);

    return 0;
}
