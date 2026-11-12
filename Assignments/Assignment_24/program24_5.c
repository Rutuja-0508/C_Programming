///////////////////////////////////////
//
// Function Name : StrRevX
// Description   : Reverses a string in place
// Input         : String
// Output        : Reversed string
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}