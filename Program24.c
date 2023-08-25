#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
   
    while(iCnt<=iValue)
    {
        printf("Marvellous : %d \n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the Number\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;

}