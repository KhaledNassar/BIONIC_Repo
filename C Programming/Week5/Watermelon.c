#include <stdio.h>

int main() {
	unsigned char W;
	printf("Enter the Weight of the Watermelon: ");
	scanf("%i", &W);
	if ((W <= 0) || (W > 100))
		printf("Invalid number");
	else {
		if((W%2==0) && (W>2))
			printf("Yes");
		else
			printf("No");
	}



	return 0;
}