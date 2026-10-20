///////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : Calculates the electricity bill
// Input         : Integer
// Output        : Electricity bill
// Author        : Rutuja Patil
// Date          : 21/10/2026
//
///////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Input\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    if(iUnits >= 0)
    {
        printf("Bill = %.2f\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
