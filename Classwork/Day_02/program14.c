//Main chi file aahe
#include"Header.h"
//user defined aahe mhaun "" nhi ye te . current derectry madhe aahe mhun "" . aani gcc madhe search karayacha aasel tar <> aasta 
////////////////////////////////////////////////////
//
//  Funtion name :  Addition
//  Input :         Integer, Integer
//  Output :        Integer
//  Description:    Performs addition
//  Date:           04/10/2026
//  Author:         Rutuja Patil
//
////////////////////////////////////////////////////
int main()
{
    int iValue1= 0 , iValue2 = 0 , iResult = 0; 

    printf("Enter first No : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE; 
    }

    printf("Enter Second No : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE; 
    }

    iResult = Addition(iValue1, iValue2);     

    printf("Addition is : %d\n",iResult);     

    return EXIT_SUCCESS; 
}
