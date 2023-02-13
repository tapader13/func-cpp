#include <stdio.h>
int maximum(int array[])
{
    int i;
    int max = array[0];
    for (i = 1; i < 6; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int array[] = {10, 30, 0, -70, 45, 87};

    int result = maximum(array);
    printf("Maximum is = %d", result);
}