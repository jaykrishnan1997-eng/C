//Program to check if a number is 0, negative or positive
#include <stdio.h>
//defining the function
void Num(int N) {
// if number is 0
	if (N == 0) {
		printf("Number is Zero\n");
	}
// if number is negative
	else if (N < 0) {
		printf("%d is Negative\n", N);
	}
// if number is positive
	else  {
                printf("%d is Positive\n", N);
        }
}

int main() {
  int N;
  printf("Enter the number\n");
// Check if the input is invalid or not.
  if (scanf("%d" , &N) != 1) {
	printf("Invalid Input!");
	return 1;
  }
  Num(N);
  return 0;


}
