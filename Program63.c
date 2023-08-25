
// accept number from user and check whether it's palindrome
//Pallindrome is rverse the number is same value
// dynamic allocation in C, Malloc ,pointer in C, Array, Function Calling techniques(Call by value,call by address),Array traverseal in C programming.
#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    for(iRev = 0;iNo !=0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }

    if (iRev == iTemp)
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