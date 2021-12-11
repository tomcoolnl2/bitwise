#include <stdio.h>
#include <string.h>

void printBin(int _number);
void reverseString(char *_array);

void printBin(int n)
{
    char binString[65] = {0};
    int i = 0;
    const char cZero = '0';

    do
    {
        binString[i++] = (n % 2) + cZero;
    } while (n /= 2);

    binString[i] = '\0';
    reverseString(binString);

    printf("%s\n", binString);
}

void reverseString(char *s)
{
    int lastIndex = strlen(s) - 1;
    int firstIndex = 0;
    char ch;

    while (firstIndex < lastIndex)
    {
        ch = s[firstIndex];
        s[firstIndex] = s[lastIndex];
        s[lastIndex] = ch;

        firstIndex++;
        lastIndex--;
    }
}

int main()
{
    int x;

    printf("Enter any integer\t");
    scanf("%d", &x);

    printf("Binary representation is  ");
    printBin(x);

    return 0;
}