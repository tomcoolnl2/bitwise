#include <stdio.h>

int add (int, int);

int main() 
{
    int x = 9, y = 10;

    printf("Sum of %d and %d is %d", x, y, add(x, y));

    return 0;
};

int add(int a, int b)
{
    int carry = 1;

    while(carry != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    return a;
};