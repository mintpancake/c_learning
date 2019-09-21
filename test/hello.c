#include <stdio.h>

int main()
{
    printf("Please enter two number: ");
    float a;
    float b;
    scanf("%f\n%f", &a, &b);
    float s = a + b;
    printf("The sum of %.2f and %.2f is %.2f. ", a, b, s);
    return 0;
}