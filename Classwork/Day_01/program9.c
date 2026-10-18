#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////
//
//  Funtion name :  Addition
//  Input :         Integer, Integer
//  Output :        Integer
//  Description:    Performs addition
//  Date:           09/10/2026
//  Author:         Rutuja Patil
//
////////////////////////////////////////////////////

//K & R Representation asa hota
int Addition(
                int iNo1,     //First input
                int iNo2      //Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;      // Business logic

    return iAns;
}
////////////////////////////////////////////////////
//
//Entry point of the application
//
////////////////////////////////////////////////////

int main()
{
    int iValue1= 0 , iValue2 = 0 , iResult = 0; 

    printf("Enter first No : \n");
    scanf("%d",&iValue1);  

    printf("Enter Second No : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);     

    printf("Addition is : %d\n",iResult);     

    return EXIT_SUCCESS; //change //MARCO
    //return EXIT_FAILUAR; 
}

////////////////////////////////////////////////////
//  step5:   Test the program
//  
//  Tested tast cases
//
//-----------------------------------------------
//  Input1      Input2      Output
//----------------------------------------------
//  10          11          21
//  11          0           11
//  10          11          11
//              -9          11
//  -20          20          1
//  10          11          21
////////////////////////////////////////////////////

