/*Write a C program to print day of week name using switch case*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short Day;
    printf("Enter the number of the day\n");
    scanf("%d", &Day);

    if(Day>7 || Day <1){
         printf("This is an invalid number!");
    }
    else{
     switch(Day){
         case(1): printf("This is Saturday");
         break;
         case(2): printf("This is Sunday");
         break;
         case(3): printf("This is Monday");
         break;
         case(4): printf("This is Tuesday");
         break;
         case(5): printf("This is Wednesday");
         break;
         case(6): printf("This is Thursday");
         break;
         case(7): printf("This is Friday");
         break;
     }
    }
    return 0;
}
