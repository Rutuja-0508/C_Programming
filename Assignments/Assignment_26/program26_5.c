///////////////////////////////////////
//
// Function Name : Display
// Description   : Displays ASCII value in three number systems
// Input         : Character
// Output        : Decimal, octal and hexadecimal values
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : %04o\n", (unsigned char)ch);
    printf("Hexadecimal  : 0x%02X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}