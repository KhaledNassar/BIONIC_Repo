/*Write a C program to input elements in array and put even and odd elements in separate array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char elements[20];
    char odd_elements[20];
    char even_elements[20];
    unsigned short int oddIndex, evenIndex, i;

    printf("Enter the elements then press * to confirm \n");
    for(i = 0; i < 20; i++){
        scanf(" %c", &elements[i]);
        if(elements[i] == '*')
            break;
    }

    for(i = 0; elements[i] != '*' ; i++){
        if(elements[i]%2 == 0){
            even_elements[evenIndex] = elements[i];
            evenIndex++;
        }
        else{
            odd_elements[oddIndex] = elements[i];
            oddIndex++;
        }
    }

    printf("\n");
    printf("The even elements are: ");
    for(i = 0; i <= evenIndex; i++){
        printf("%c ", even_elements[i]);
    }

    printf("\n");
    printf("The odd elements are: ");
    for(i = 0; i <= oddIndex; i++){
        printf("%c ", odd_elements[i]);
    }
    return 0;
}
