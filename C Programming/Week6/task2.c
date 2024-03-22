/*Write a C program to find largest and second largest element in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int temp, elements[20] = {5,8,6,2,3};
    for(int i = 0; i < 20; i++){
        if(elements[i] >= elements[1]){
            if(elements[i] > elements[0]){
            temp = elements[0];
            elements[0] = elements[i];
            elements[1] = temp;
            }
            else
                elements[1] = elements[i];
        }

    }

    printf("The largest element is: %d \nThe second largest element is: %d", elements[0], elements[1]);
    return 0;
}
