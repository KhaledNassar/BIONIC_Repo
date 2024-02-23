/*Write a C program to print all even numbers between 1 to 100. – using while loop*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short number = 2;
    while(number <=100 ){
        printf("%d \n", number);
        number+=2;
    }
    return 0;
}
