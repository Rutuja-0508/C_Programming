///////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : Checks divisibility by 3 and 5
// Input         : Integer number
// Output        : Divisibility result
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{

    if (((iValue % 5) == 0) && ((iValue % 3) == 0))
    {
        printf("The number is Divisible by Both 5 and 3");
    }
    else if((iValue % 5) == 0)
    {
        printf("The number is Only Divisible by 5");
    }
    else if((iValue % 3) == 0)
    {
        printf("The Number is Only Divisible by 3");
    }
    else
    {
        printf("The number is not Divisible by Either");
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}