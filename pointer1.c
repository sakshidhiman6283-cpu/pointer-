#include <stdio.h>

int main()
{
    int num = 10;

    printf("Value of num = %d\n", num);
    printf("Addressof num = %p", &num);

    return 0;
}
int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return 0;
}