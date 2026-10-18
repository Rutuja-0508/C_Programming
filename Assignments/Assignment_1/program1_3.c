///////////////////////////////////////
//
// Function Name : Display
// Description   : Prints numbers in descending order
//                 from 5 to 1
// Input         : No input
// Output        : 5 4 3 2 1
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
