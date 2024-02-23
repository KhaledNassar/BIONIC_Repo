/*Write a C program to create Simple Calculator using switch case*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float operand1,operand2;
    unsigned char Operator;
    printf("Enter Your Operation\n");
    scanf("%f", &operand1);
    scanf(" %c",&Operator);
    scanf("%f",&operand2);
    switch(Operator){
        case'+': printf("%.2f\n", operand1 + operand2); break;
        case'-': printf("%.2f\n", operand1 - operand2); break;
        case'*': printf("%.2f\n", operand1 * operand2); break;
        case'/': printf("%.2f\n", operand1 / operand2); break;
        default: printf("Invalid Operation\n");
    }
    return 0;
}
