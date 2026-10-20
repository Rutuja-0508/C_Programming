#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter Number : \n");
    if(scanf("%d",&no) != 1)
    {
        printf("Invailed input \n");

        return EXIT_FAILURE;
    }

    printf("Input is vailed\n");

    return EXIT_SUCCESS;
}
