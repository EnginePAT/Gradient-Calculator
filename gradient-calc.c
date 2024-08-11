#include <stdio.h>
#include <stdlib.h>

int main() {

	float rise;
	float run;

	system("clear");

	printf("Gradient Calculator\n");

	printf("Rise: ");
	scanf("%f", &rise);
	printf("Run: ");
	scanf("%f", &run);

	double result = rise / run;
	printf("\n");
	printf("Gradient: %f", result);

	return 0;
}
