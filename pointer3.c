#include <stdio.h>

int main()
{
    int num = 15;
    int *ptr = &num;

    *ptr = 50;

    printf("New value of num = %d", num);

    return 0;
}