#include <stdio.h>
void pName(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("hello\n");
        pName(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pName(n);
    // printf("%d",res);
}