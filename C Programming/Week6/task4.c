/*Write a C program to input elements in array and print all unique elements in array*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char elements[20];
    char Unique[20];
    unsigned int i, j, index = 0, decision = 0;
    printf("Enter the elements and press * to confirm\n");

    for(i = 0; i < 20; i++) {
        scanf(" %c", &elements[i]);
        if(elements[i] == '*')
            break;
    }

    for(i = 0; elements[i] != '*' ; i++) {
        decision = 0;
        for(j = 0; j < i ; j++) {
            if(elements[j] == elements[i]) {
                decision = 1;
                break;
            }
        }
        if(decision == 0) {
            Unique[index++] = elements[i];
        }

    }

    printf("The unique elements are: ");
    for(i = 0; i < index; i++) {
        printf("%c ", Unique[i]);
    }
    printf("\n");

    return 0;
}
