///////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : Accept a character and convert its case
// Input         : Character
// Output        : Character with the opposite case
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n",cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n",cValue + 32);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}