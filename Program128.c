// Chexk the capital Value

#include<stdio.h>
#include<stdbool.h>

bool ChckSmall(char ch)
{
     if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = ChckSmall(cValue);
    if(bRet == true)
    {
        printf("%c is small case letter\n",cValue);
    }
    else
    {
        printf("%c is not small case letter\n",cValue);
    }

    return 0;
}