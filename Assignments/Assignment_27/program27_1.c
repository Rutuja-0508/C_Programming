///////////////////////////////////////
//
// Function Name : CountCapital
// Description   : Counts capital characters in a string
// Input         : String
// Output        : Number of capital characters
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters: %d", iRet);

    return EXIT_SUCCESS;
}
