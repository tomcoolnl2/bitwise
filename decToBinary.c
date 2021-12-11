#include <stdio.h>
#include <stdlib.h>

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[100];
    // counter for binary array
    int i = 0;
    int j;

    while (n > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i += 1;
    }

    // printing binary array in reverse order
    for (j = i - 1; j >= 0; j -= 1)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main()
{
    int x;

    printf("Enter any integer\t");
    scanf("%d", &x);

    printf("Binary representation is  ");
    decToBinary(x);
    printf("One's complement of %d is %d\n", x, ~x);

    return 0;
}
