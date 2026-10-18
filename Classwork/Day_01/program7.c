/*
    step1:   Understand the problem statment 
    step2:   Write the algorithem
    step3:   Decide the programming language
    step4:   Write the program
    step5:   Test the program
    
*/

//////////////////////////////////////////////////
//   step1:   Understand the problem statment 
//           User is going to any to intergers
//           And we have to perform addition
//
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//   step2:   Write the algorithem
/*   
    START
        Accept first number as No1
        Accept Second number as No2
        Create the variable as Ans to store the result 
        Perform the addition and store into Ans
        Display the result from Ans
    END
*/
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//
//  step3:   Decide the programming language
//          We select C programming 
////////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//  step4:   Write the program
//
////////////////////////////////////////////////////

#include<stdio.h>

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


int Addition(int iNo1, int iNo2)
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

    return 0;
}

