/*Write a C program to check whether a number is even or odd using functions*/
#include <stdio.h>
#include <stdlib.h>

void IsOddOrEven(signed int);
int main()
{
    signed int number;
    printf("Enter The Number\n");
    scanf("%d", &number);
    IsOddOrEven(number);
    return 0;
}

void IsOddOrEven(signed int number){
    if(number%2 == 0){
        printf("This an Even number");
    }
    else{
        printf("This an Odd number");
    }
}
