///////////////////////////////////////
//
// Function Name : strlwrx
// Description   : Converts string into lowercase
// Input         : String
// Output        : Lowercase string
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
