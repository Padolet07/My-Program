// Accept Numbers of user 

#include<stdio.h>

int DisplayFactors(int iNo)
{
 
     int iCnt = 0;
     printf("Factor is: ");
     // Time complecity
     for(iCnt = 1; iCnt <= (iNo/2); iCnt)
     {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
     }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}