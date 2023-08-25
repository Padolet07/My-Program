#include<stdio.h>

int main()
{
    int i = 0;

    printf("_____________________________________");
    printf("ASCII table\n");
    printf("_____________________________________\n");

    printf("Character \t Decimal\t Hex \t Octal");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t %d \t %x \t %o \n",i,i,i,i);
    }

    printf("_____________________________________\n");

    return 0;
}