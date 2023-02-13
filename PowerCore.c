#include <stdio.h>
int main()
{
    double base, exp, result = 1;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exp :");
    scanf("%lf", &exp);
    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }
    printf("%.2lf", result);
}