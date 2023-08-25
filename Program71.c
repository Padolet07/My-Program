#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iData = 0;

    printf("Enter of element you want to store : \n");
    scanf("%d",&iData);

    ptr = (int *)malloc(iData * sizeof(int));

    printf("Enter the element : \n");

    for(iCnt = 0; iCnt < iData; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < iData; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Summation(ptr,5);
    printf("Addition of all elements is : %d\n",iRet);

    free(ptr);

    return 0;
}  