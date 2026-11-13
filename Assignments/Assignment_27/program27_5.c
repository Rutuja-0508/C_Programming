///////////////////////////////////////
//
// Function Name : Reverse
// Description   : Displays string in reverse order
// Input         : String
// Output        : Reversed string
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iLength = 0;
    int iCnt = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    printf("Reversed string: ");

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf(" %[^\n]", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}