///////////////////////////////////////
//
// Function Name : CountWhite
// Description   : Counts white spaces in a string
// Input         : String
// Output        : Number of white spaces
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces is %d\n", iRet);

    return EXIT_SUCCESS;
}