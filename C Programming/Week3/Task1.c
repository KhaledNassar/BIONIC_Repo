/*Write a C program to input marks of five subjects Calculate percentage and grade*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float Physics, Chemistry, Biology, Mathematics, Computer,  Percentage;
    printf("Enter The mark of Physics\n");
    scanf("%f", &Physics);
    printf("Enter The mark of Chemistry\n");
    scanf("%f", &Chemistry);
    printf("Enter The mark of Biology\n");
    scanf("%f", &Biology);
    printf("Enter The mark of Mathematics\n");
    scanf("%f", &Mathematics);
    printf("Enter The mark of Computer\n");
    scanf("%f", &Computer);
    if(Physics<0 || Chemistry<0 || Biology<0 || Mathematics<0 || Computer<0 || Physics<100 || Chemistry<100 || Biology<100 || Mathematics<100 || Computer<100){
        printf("There are an invalid number/s Please try again");
    }
    else{
        Percentage  = (Physics+Chemistry+Biology+Mathematics+Computer)*100/500;
        printf("The Total percentage is: %.2f%\n", Percentage);

        if (Percentage >= 90) printf("Your Grade is: Grade A");
        else if (Percentage >= 80) printf("Your Grade is: Grade B\n");
        else if (Percentage >= 70) printf("Your Grade is: Grade C\n");
        else if (Percentage >= 60) printf("Your Grade is: Grade D\n");
        else if (Percentage >= 40) printf("Your Grade is: Grade E\n");
        else printf("Your Grade is: Grade F\n");
    }

    return 0;
}
