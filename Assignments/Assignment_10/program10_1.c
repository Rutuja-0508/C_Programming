///////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Calculates area of a circle
// Input         : Float
// Output        : Double (Area of Circle)
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return EXIT_SUCCESS;
}
