/*Write a C program to count number of digits in a number using looping*/
/* --> negative !!!*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed long long int number;
    unsigned short int digit = 0;
    printf("Enter The number\n");
    scanf("%d",&number);
    do{
        digit++;
        number/=10;
    }while(number!=0);

    printf("The number of digits = %d\n", digit);

    return 0;
}
