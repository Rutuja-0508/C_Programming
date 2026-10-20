///////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : Identifies the type of character
// Input         : Single character
// Output        : Character type
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("It is an upper case Letter");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("It is an lower case Letter");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("It is an Digit");
    }
    else
    {
        printf("its an Special character");
    }   

}

int main()
{
    char cValue = '\0';

    printf("Enter a Character :");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}