///////////////////////////////////////
//
// Function Name : DisplayName
// Description   : Accepts a full name and displays it
// Input         : String
// Output        : Displays the entered name
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayName(char Name[])
{
    printf("Your name is %s\n", Name);
}

int main()
{
    char Name[100];

    printf("Please enter full name: ");
    scanf(" %29[^\n]", Name);

    DisplayName(Name);

    return EXIT_SUCCESS;
}
