///////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : Displays only digits from a string
// Input         : String
// Output        : Digits present in string
// Author        : Rutuja Patil
// Date          : 12/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int iFound = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
            iFound = 1;
        }

        str++;
    }

    if(iFound == 0)
    {
        printf("No digits found");
    }

    printf("\n");
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}