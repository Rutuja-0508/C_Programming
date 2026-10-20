///////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Checks whether a year is a leap year
// Input         : Integer year
// Output        : Leap Year or Not a Leap Year
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid year");
    }
    else if ((iYear % 400) == 0 || (iYear % 4) == 0 && ((iYear % 100) != 0 ))
    {
        printf("This is a Leap Year");
    }
    else
    {
        printf("This is not a Leap year");
    }
    

}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}