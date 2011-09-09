#include <stdio.h>
#include "pascal_triangle_function.h"

int main()
{
	int height=0;
	int i,j;
	
	/*Input*/
	printf("Input height: ");
	scanf("%d",&height);
	
	/*Output: using definition of pascal triangle*/
	for (i = 0; i < height; i++) {
		for (j = 1; j < height - i; j++) printf("   ");/*Use to align the triangle*/
		for (j = 0; j <= i; j++) {
			printf("%6.0lf", combination(i,j));			/*Print the number*/
		}
		printf("\n"); /*End line*/
	}
	return 0;
}
