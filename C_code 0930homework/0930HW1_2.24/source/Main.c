#include <stdio.h>
#pragma warning(disable:4996)
//111360238
int main() {
	int number;
	printf("Enter an integer: \n");
	scanf("%d", &number);
	if (number % 2 == 0) {
		printf("%d is an even number.\n", number);
	}
	else {
		printf("%d is an odd number. \n", number);
	}
	return 0;
}