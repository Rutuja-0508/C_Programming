///////////////////////////////////////
//
// Function Name : CountSmall
// Description   : Counts lowercase characters in a string
// Input         : String
// Output        : Number of lowercase characters
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("Number of small characters: %d", iRet);

    return EXIT_SUCCESS;
}