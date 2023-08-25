// Accept the name and display
// Solution of #Program132.c File

#include<stdio.h>
#include<stdbool.h>

int main()
{
   char Arr[30];
   
   printf("Please enter ypur full name\n");
   //scanf("%s",Arr);
   scanf("%[^'\n']s",Arr);

   printf("your name is : %s\n",Arr);

    return 0;
}