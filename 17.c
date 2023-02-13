#include <stdio.h>
int pName(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {

        return n * pName(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int op = pName(n);
    printf("%d", op);
}