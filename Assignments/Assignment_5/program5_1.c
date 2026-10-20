///////////////////////////////////////
//
// Function Name : FindGreatest
// Description   : Finds the greatest of three numbers
// Input         : Three integers
// Output        : Greatest number
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf(" The Greatest Number is %d",iFirst);
    }
    else if((iSecond > iThird) && (iSecond > iFirst))
    { 
        printf("The Greatest Number is %d",iSecond);
    }
    else
    {
        printf(" The Greatest Number is %d ",iThird);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter First Number :");
    scanf("%d",&iValue1);

    printf("Enter Second Number :");
    scanf("%d",&iValue2);

    printf("Enter Third Number :");
    scanf("%d",&iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
