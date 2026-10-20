///////////////////////////////////////
//
// Function Name : CheckAdmission
// Description   : Checks admission eligibility
// Input         : Float, Integer
// Output        : Eligibility status
// Author        : Rutuja Patil
// Date          : 21/10/2026
//
///////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 0) || (fMarks > 100) || (iAge < 0))
    {
        printf("Invalid Input\n");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}