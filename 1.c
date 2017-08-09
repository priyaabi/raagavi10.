#include <stdio.h>
int main()
{
    int b, exponent;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= b;
        --exponent;
    }

    printf("Answer = %lld", result);

    return 0;
}
