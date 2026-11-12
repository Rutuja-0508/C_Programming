///////////////////////////////////////
//
// Function Name : ChkChar
// Description   : Checks whether character is present in string
// Input         : String and character
// Output        : TRUE or FALSE
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}
