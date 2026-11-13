///////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Checks whether string contains any vowel
// Input         : String
// Output        : TRUE or FALSE
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' || *str == 'A' ||
           *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[50];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf(" %[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}