///////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Converts US Dollar into Indian Rupees
// Input         : Integer
// Output        : Amount in Indian Rupees
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}