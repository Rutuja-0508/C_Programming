///////////////////////////////////////
//
// Function Name : DisplayFactor
// Description   : Accept a number and display its even factors
// Input         : Integer
// Output        : Even factors of the given number
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    { 
        return;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\n",i);
        }
    }
}


int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}