#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }//filter

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iCount++;
        
        iNo = iNo / 10;

    }
    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }//filter

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        
        iNo = iNo / 10;

    }
    return iSum;
}

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal / (float)iFrequency;

    return fAns;  //buisses logic baher kadhala
}

int main()
{
    int iValue = 0 , iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = AverageDigits(iSum, iCount);

    printf("Number of digits : %d\n",iCount);
    printf("Summation of digits : %d\n", iSum);
    printf("Average of Digits are : %.2f\n", fAvg);

    return EXIT_SUCCESS;
}