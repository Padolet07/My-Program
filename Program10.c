//////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and check whether it is divisible by 3 and 5 or not
//////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
      if((iNo % 3 == 0) && (iNo % 5 == 0))
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
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);
    
    if (bRet == true)
    {
        printf("%d Number if divisible by 3 and 5 \n",iValue);
    }
    else
    {
         printf("%d Number is not divisible by 3 and 5 \n",iValue);
    }

    return 0;
}