///////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : Checks whether a person is eligible to vote.
// Input         : Age of a person
// Output        : Eligible for Voting / Not Eligible for Voting / Invalid Age
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else if((iAge < 18) && (iAge > 0))
    {
        printf("Not Eligible for Voting");
    }
    else
    {
        printf("Invalid Age");
    }

}

int main()
{
    int iAge = 0;

    printf("Enter your Age :");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}