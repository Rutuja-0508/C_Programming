///////////////////////////////////////
//
// Function Name : CalculateBonus
// Description   : Calculates the employee bonus
// Input         : Float, Integer
// Output        : Employee bonus
// Author        : Rutuja Patil
// Date          : 21/10/2026
//
///////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
    }
    else
    {
        if(iYears > 10)
        {
            fBonus = fSalary * 15 / 100;
        }
        else if(iYears >= 5)
        {
            fBonus = fSalary * 10 / 100;
        }
        else
        {
            fBonus = fSalary * 5 / 100;
        }

        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}