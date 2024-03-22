/*Write a C program to input elements in array and find frequency of each element in array*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char elements[20];
    char temp[20];
    unsigned int i, j, index = 0, count = 0;
    printf("Enter the elements and press * to confirm\n");

    for(i = 0; i < 20; i++) {
        scanf(" %c", &elements[i]);
        if(elements[i] == '*')
            break;
    }

    for(i = 0; elements[i] != '*'; i++) {
        if(elements[i] != '#') {
            temp[index++] = elements[i];
            for(j = i + 1; elements[j] != '*'; j++) {
                if(elements[j] == elements[i]) {
                    temp[index++] = elements[j];
                    elements[j] = '#';
                }
            }
        }
    }


    printf("\n");

    printf("The frequency of each element is \n");
    for(i = 0; i < index; ) {
        printf("For (%c): ", temp[i]);
        for(j = i; temp[j] == temp[i] ; j++) {
                count++;
        }
        printf("%d \n", count);
        i = j;
        count = 0;
    }

    return 0;
}
