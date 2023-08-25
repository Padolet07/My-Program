//Steps to follow while programming

// understand the problem statement
// Write the algorithm
// Decible the Programming language
// Write the program
// Test the Program

////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////
// Accept number from user and check whether it is divisible by 5 or not
/////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
// Algorithm
////////////////////////////////////////////////////////////////////////////////////

/*
     START
          Accept number from user as NO
          Divide that NO 5 and check the value of remainder
          If the value is 0
             Then display as NO is divisible by 5
          Otherwise 
              display as NO is not divisible by 5
     END  
*/

////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int DivisibleByFive(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;

    if(iAns == 0)
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
   int iNo1 = 0;
   bool bRet;
    
   printf("Enter the number : \n");
   scanf("%d",&iNo1);

   bRet = DivisibleByFive(iNo1);
   if(bRet == false)
   {
      printf("%d is not divisible by 5",iNo1);
   }
   else
   {
    printf("%d is divisible by \n",iNo1);
   }
   


 return 0;
}