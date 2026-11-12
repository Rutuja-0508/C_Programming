///////////////////////////////////////
//
// Function Name : LastChar
// Description   : Returns index of last occurrence of character
// Input         : String and character
// Output        : Last occurrence index
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}