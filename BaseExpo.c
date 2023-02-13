#include <stdio.h>
double power(double base, double exp)
{
    double result = 1;
    for (double i = 1; i <= exp; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    double base, exp;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exp :");
    scanf("%lf", &exp);
    // power(base, exp);
    double powerValue = power(base, exp);
    printf("%lf", powerValue);
}