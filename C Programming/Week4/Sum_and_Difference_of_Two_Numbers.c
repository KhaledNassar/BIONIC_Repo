#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int num1, num2;
    float numf1, numf2;
    scanf("%d %d",&num1, &num2);
    scanf("%f %f", &numf1, &numf2);
    
    printf("%d %d\n", (num1+num2), (num1-num2));
    printf("%.1f %.1f\n", (numf1+numf2), (numf1-numf2));
    
    return 0;
}
