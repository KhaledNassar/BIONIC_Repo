/*Write a C program to check whether an alphabet is vowel or consonant using switch case*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char character;
    printf("Enter the alphabet: ");
    scanf(" %c", &character);
    if((character >= 'A' && character <= 'Z') || character >= 'a' && character <= 'z'){
        switch(character){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("%c is a Vowel alphabet", character);
        break;
        default: printf("%c is a Constant alphabet", character);
        }

    }
    else{
        printf("%c is not an alphabet", character);
    }
    return 0;
}
