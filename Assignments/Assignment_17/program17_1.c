///////////////////////////////////////
//
// Function Name : Pattern
// Description   : Displays numbers from 1 to 9 repeatedly
// Input         : Number of rows and columns
// Output        : Repeated number pattern
// Author        : Rutuja Patil
// Date          : 09/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);

            iNum++;

            if(iNum > 9)
            {
                iNum = 1;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
