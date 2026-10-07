#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input. Please enter two integers.\n");
        return 1;
    }

    sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}
