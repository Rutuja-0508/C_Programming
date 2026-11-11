///////////////////////////////////////
//
// Function Name : Pattern
// Description   : Displays first N even numbers
// Input         : Number of elements
// Output        : Even number pattern
// Author        : Rutuja Patil
// Date          : 11/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}