#include <stdio.h>

void Num(int N) {

	if (N == 0) {
		printf("Number is Zero\n");
	}
	else if (N < 0) {
		printf("%d is Negative\n", N);
	}
	else  {
                printf("%d is Positive\n", N);
        }
}

int main() {
  int N;
  printf("Enter the number\n");

  if (scanf("%d" , &N) != 1) {
	printf("Invalid Input!");
	return 1;
  }
  Num(N);
  return 0;


}
