#include <stdio.h>
#include <math.h>
int main()
{
    double base, exp, result;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exp :");
    scanf("%lf", &exp);
    result = pow(base, exp);
    printf("result is %.2lf", result);
}