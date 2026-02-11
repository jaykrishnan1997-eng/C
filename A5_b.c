//The smallest factor of a number greater than one cannot be greater than the square root of that number.
#include <stdio.h>

int main() {
// If int n user the max limit is very less compared to long long, also %d -> %lld 
	long long n;
	int c = 0;

	printf("Enter the number:");
	scanf("%lld", &n);
// if number is 1 or even, then its not prime and program should end using return
	if (n<=1 || ((n>2)&&(n%2 == 0)))
		{printf("%lld is not a prime\n", n);
		 return 0;}
// if number is 2, then display its prime and end code
	else if (n == 2)
		{printf("2 is prime\n");
		 return 0;}
// if number is 3 or above then run this part. once we have a factor break the loop
	else 
		{for (long long i = 2; i*i <= n; i++)
			{if (n%i == 0)
				c++; break;}}
// check if c is greater than 0
	if (c > 0)
		printf("%lld is not a prime number\n", n);
	else
		printf("%lld is a prime number\n", n);

return 0;

}
