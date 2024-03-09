#include <stdio.h>

int main() {

	unsigned int n, solutions = 0;
	printf("Enter the number of problems in the contest then your view on the solution \n");
	scanf("%d", &n);

	if ((1 <= n) && (n <= 1000)) {
		unsigned int views[n][3];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				scanf("%d", &views[i][j]);
				if (views[i][j] > 1) {
					printf("\nInvalid Value!! \n");
					solutions = 0;
					break;
				}
			}
			if ((views[i][0] + views[i][1] + views[i][2]) >= 2)
				solutions++;
		}

		printf("%d", solutions);
	}
	else
		printf("Invalid number!");

	return 0;
}
