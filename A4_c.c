//program to add two integers using bitwise operator
#include <stdio.h>

//Define a function to add two numbers using bitwise operators
int addUsingBitwise(int a, int b)
{ while (b!=0)
	{
	int carry = a & b; // Find carry bits
	a = a ^ b;         // Add without carry
	b = carry << 1;    // Shift carry to correct position
	}
return a;
}

int main(void)
{
	int a, b;

	//Input two numbers
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	int sum = addUsingBitwise(a, b);

	//Output result
	printf("Sum = %d\n", sum);

	return 0;

}
