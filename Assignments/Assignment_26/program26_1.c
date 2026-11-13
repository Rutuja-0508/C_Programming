///////////////////////////////////////
//
// Function Name : DisplayASCII
// Description   : Displays ASCII values in decimal, octal and hexadecimal
// Input         : None
// Output        : ASCII table from 0 to 255
// Author        : Rutuja Patil
// Date          : 13/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tOctal\tHexadecimal\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(isprint(iCnt))
        {
            printf("%c\t%d\t%04o\t0x%02X\n",
                   iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf("Non-print\t%d\t%04o\t0x%02X\n",
                   iCnt, iCnt, iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
