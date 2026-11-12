///////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : Checks whether character is an alphabet
// Input         : Character
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

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}
