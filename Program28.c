#include<stdio.h>

int Summation()
{
   int iSum = 0;
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 6; iCnt++)
   {
    iSum = iSum + iCnt;
   }
   
    return iSum;

}

int main()
{
    int iRet = 0;
    
    iRet = Summation();

    printf("Summation is : %d",iRet);

    return 0;
}