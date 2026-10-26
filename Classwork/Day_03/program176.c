#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

        if(iRev == iNo) //ISSUE (BUG)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
int main()
{
    int iValue = 0 , bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Pallindrome \n");
    }
    else
    {
        printf("Number is Not Pallindrome \n");
    }

    return EXIT_SUCCESS;
}