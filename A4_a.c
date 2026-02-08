// program to add two numbers
#include <stdio.h>

int main() {
	//declaring variables
	int a, b, sum = 0;

	//inputing two numbers
	printf("Enter two integers:");
	scanf("%d %d", &a, &b);

	//calculating sum
	sum = a+b;

	//printing the output sum
	printf("Sum of %d and %d = %d\n", a, b, sum);

	return 0;
}
