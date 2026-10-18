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

int main()
{
    int iValue1 , iValue2 , iResult;

    printf("Enter first No : \n");
    scanf("%d",&iValue1);  

    printf("Enter Second No : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;     //Business logic

    printf("%d\n",iResult);

    return 0;
}

