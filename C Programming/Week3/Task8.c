/*Write a C program to print all Prime numbers between 1 to n*/
#include <stdio.h>
#include <stdlib.h>


int main(){

    unsigned int n, devisors;
    printf("Enter the end of range\n");
    scanf("%d", &n);

    if (n>1){
            printf("The prime numbers between 1 and %d are: ", n);
        for (int count = 1; count <= n; count ++){
            devisors = 0;
            for (int i = 2; i<= count; i++){
                if(count%i == 0){
                    devisors++;
                }
            }

            if((devisors==1) && (count != 1)){
                printf("%d ", count);
            }
        }

    }
    else{
            printf("This is an invalid number");
        }


    return 0;
}
