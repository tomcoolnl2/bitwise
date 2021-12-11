
#include <stdio.h>
#include <math.h>
#include <string.h>

#define STR32 33 // 32 bit binay value + 1 for the \0 terminator
int binToDec(char *);

int main(int argc, char *argv[])
{
    char ch = 0;
    char cBinArray[STR32] = {0};

    do
    {
        printf("Enter the binary number to be converted to Decimal: ");
        // limit the input length to STR32
        fgets(cBinArray, STR32, stdin);
        // clear the '\n' new line character from the array
        cBinArray[strlen(cBinArray) - 1] = '\0';

        printf("The decimal value of %s is : %d\n", cBinArray, binToDec(cBinArray));
        printf("\n\nPress 'q' to quit... OR \nPress ANY key to continue...\n");

        ch = getchar();
        fseek(stdin, 0, SEEK_END);

    } while (ch != 'q');

    return 0;
}

int binToDec(char *buffer)
{
    int i = 0; // iterator
    int d = 0; // decimal value
    // positional value, length of the string buffer, -1 to account for \0
    int pv = strlen(buffer) - 1;

    while (buffer[i] != '\0')
    {
        if (buffer[i++] == '1')
        {
            d += pow(2, pv);
        }
        pv--;
    }

    return d;
}