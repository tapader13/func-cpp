#include <stdio.h>
void passingStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("Every string number is : %c\n", str[i]);
        i++;
    }
}

int main()
{
    char str[] = "minhaj uddin tapader";
    passingStr(str);
}