/*Write a C program to find power of any number using functions.*/
#include <stdio.h>
#include <stdlib.h>

double PowerFunction(float , float);
int main()
{
    float base;
    signed int power;
    printf("Enter The Base number\n");
    scanf("%f", &base);
    printf("Enter The Power number\n");
    scanf("%d", &power);

    printf("The Result is: %.2lf", PowerFunction(base, power));
    return 0;
}

double PowerFunction(float base, float power){
    double Result = 1;
    if(power > 0){
        for(unsigned int i = 1; i <= power ; i++){
        Result *= base;
        }
    }
    else if(power < 0){
        for(signed int i = 0; i > power ; i--){
        Result *= (1/base);
        }
    }

    return Result;
}
