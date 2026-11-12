///////////////////////////////////////
//
// Function Name : struprx
// Description   : Converts string into uppercase
// Input         : String
// Output        : Uppercase string
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}