#include <stdio.h> 
#include "square.h"

int main() {
	signed int number;
	printf("Enter the number: ");
	scanf("%i", &number);
	printf("%d", SQUARE(number));

	return 0;
}