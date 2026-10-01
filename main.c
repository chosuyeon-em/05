#include <stdio.h>

int main(void) {
    int n1;
    int n2;
    char method;
    printf("enter the calculation : ");
    scanf("%i %c %i", &n1, &method, &n2);

    if (method == '+')
        printf("+=%i", n1+n2);
    else if (method == '-')
        printf("-=%i", n1-n2);
    else if (method == '*')
        printf("*=%i", n1*n2);
    else if (method == '/')
        printf("/=%i", n1/n2);

    return 0;
}
