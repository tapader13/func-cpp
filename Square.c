#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    int result = square(num);
    printf("square is=%d", result);
}
int square(int a)
{
    return a * a;
}