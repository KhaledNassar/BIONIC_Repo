/*Write a C program to print Fibonacci series up to n terms*/
/*The Rule is x = x−1 + n−2*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, x0 = 0, x1 = 1;
    printf("Enter the end number n\n");
    scanf("%d", &n);

    if(n>1){
            printf("The Fibonacci series up to %d terms is: 0 1 ", n);
        for(int count = 2; count < n; count ++){
            printf("%d ", x0 + x1);
            int switching = x0;
            x0 = x1;
            x1 = switching + x1;

        }
    }
    else{
        printf("Invalid Number!");
    }

    return 0;
}
