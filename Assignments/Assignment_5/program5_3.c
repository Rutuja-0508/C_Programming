///////////////////////////////////////
//
// Function Name : DisplayGrade
// Description   : Displays grade according to marks
// Input         : Float marks
// Output        : Student grade or Invalid Marks
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{

    if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("You Grade is A");
    }
    else if((fMarks >= 75 ) && (fMarks <= 89))
    {
        printf("You Grade is B");
    }
    else if((fMarks >= 60 ) && (fMarks <= 74))
    {
        printf("You Grade is C");
    }
    else if((fMarks >= 40 ) && (fMarks <= 59))
    {
        printf("You Grade is D");
    }
    else if((fMarks < 40) && (fMarks >= 0))
    {
        printf("You are fail....");
    }
    else
    {
        printf("Marks are invalid");
    }

}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks :");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}