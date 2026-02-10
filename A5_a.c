//Program to find if a number is a prime numnber or not by trial method (time consuming)
#include <stdio.h>

int main() { int n;
	int c = 0;
	
	//part to accept the number as input
	printf("Enter the number:");
	//&n shows the location of variable n so as the store the entered number
	scanf("%d",&n);
	// number must be greater than 1
	if (n <= 1)
		printf("%d is not a prime", n);
	else {
		//loop to count number of times n is divisible by anumber less than n
		for (int i = 1; i<=n ; i++) {
			if (n%i == 0)
				c++;}
	//prime number should be divisible by itself and 1. ie c=1,2 => prime number
		if (c > 2)
			printf("%d is not a prime number", n);
		else 
			printf("%d is a prime number", n);
	}
	return 0;
}
