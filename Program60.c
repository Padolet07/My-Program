
#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;
    }
    
return iRev;
}

bool CheckPallindrome(int iData)
{
    int Reverse = 0;
    Reverse = Reverse(iData);
    return (Reverse == iData);
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
 if(bRet == true)
 {
    printf("%d is pallindrome number\n",iValue);
 }
 else 
 {
     printf("%d is not pallindrome number\n",iValue);
 }
 

    return 0;
}