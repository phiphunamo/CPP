#include <stdio.h>

int wide, longer;
float square;

main(){
	printf("Enter wide:");
	scanf("%d", &wide);
	printf("Enter longer:");
	scanf("%d", &longer);
	square = wide*longer;
	printf("wide= %d \n longer= %d \n square= %.3f", wide, longer, square);
	}
