// print name as input

#include <stdio.h>

int main() {
	//define a string that accepts 150 character max
	char n[150];

	//print Enter your name and accept input from user
	printf("Enter your name\n");
	scanf("%s", n);

	//printing name to output screen
	printf("Your name is %s\n", n);

	return 0;
}
