///////////////////////////////////////
//
// Function Name : Difference
// Description   : Returns difference between small and capital characters
// Input         : String
// Output        : Difference between their counts
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", arr);

    iRet = Difference(arr);

    printf("Difference is: %d", iRet);

    return EXIT_SUCCESS;
}