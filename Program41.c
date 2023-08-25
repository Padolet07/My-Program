#include<stdio.h>

void EvenFactorsDisplay(int iNo)
{
    int iCnt = 0;
   
    printf("---------------------------------------\n");
    
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if (iNo % iCnt == 0) && (iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
        
        printf("%d\t",iCnt);
      
    }
    printf("\n--------------------------------------\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    EvenFactorsDisplay(iValue);

    return 0;
}