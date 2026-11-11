///////////////////////////////////////
//
// Function Name : Pattern
// Description   : Displays alphabets from A onwards
// Input         : Number of elements
// Output        : Alphabet pattern
// Author        : Rutuja Patil
// Date          : 11/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 0; i < iNo; i++)
    {
        printf("%c\t", 'A' + i);
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
