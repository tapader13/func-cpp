#include <stdio.h>
void display(int array[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }
}
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60};
    display(array);
}