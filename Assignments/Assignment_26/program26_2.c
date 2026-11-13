#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////
//
// Function Name : Display
// Description   : Converts uppercase to lowercase and vice versa
// Input         : Character
// Output        : Modified character
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output: %c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}