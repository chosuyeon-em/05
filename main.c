#include <stdio.h>

int main(void) {
    int integer;
    printf("Enter an integer : ");
    scanf("%i", &integer);

    if (integer != 0)
        if (integer > 0)
            printf("positive number.\n");
        else
        printf("negative number.\n");
    else
        printf("zero.\n");

    return 0;
}