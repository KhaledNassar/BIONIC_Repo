/*Write a C program to Pyramid star pattern of n rows using for loop*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int counter1, counter2, rows;
    printf("Please Enter The Number Of Rows: \n");
    scanf("%i", &rows);

    for(counter1 = rows; counter1 > 0; counter1--)
    {
        for(int i = 0; i < ((counter1*2 - 1)/2); i++)
        {
            printf(" ");
        }

        for(counter2 = 1; counter2 <= ((rows - counter1)*2 + 1); counter2++)
        {
            printf("*");
        }
        for(int i = 0; i < ((counter1*2 - 1)/2); i++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
