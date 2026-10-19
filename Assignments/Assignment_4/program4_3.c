///////////////////////////////////////
//
// Function Name : FindGreater
// Description   : Finds the greater of two numbers.
// Input         : Two integers
// Output        : Greater Number / Both Numbers Are Equal
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{

    if(iFirst > iSecond)
    {
        printf("%d is Greater than\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater than\n",iSecond);
    }
    else
    {
        printf("Both are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Two Numbers :");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}