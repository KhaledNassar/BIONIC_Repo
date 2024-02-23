/*Write a C program to calculate factorial of a number*/
/* --> if float */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, factorial = 1;
    printf("Enter the Number\n");
    scanf("%d", &number);

    if(number < 0){
        printf("This is an invalid number!");
    }
    else{
        for(int count = number ; count > 1 ; count--){
            factorial *= count;
        }
    }
    printf("The factorial of %d is: %d", number, factorial);
    return 0;
}
