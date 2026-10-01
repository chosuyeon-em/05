#include <stdio.h>

int main(void) {
    int i;
    int num;
    int sum;
    sum = 0;

    printf("input a number : ");
    scanf("%i", &num);

    for (i=0; i<num; i++) {
        sum = sum + i + 1;
        }
 
    printf("The result is %i\n", sum);

    return 0;
}
