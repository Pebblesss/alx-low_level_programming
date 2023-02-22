#include <stdio.h>

int main(void)
{
	unsigned int prev1 = 1, prev2 = 2, curr = 3;
	int count = 2;

	printf("%u, %u, ", prev1, prev2);

	while (count < 98)
	{
		printf("%u, ", curr);
		prev1 = prev2;
		prev2 = curr;
		curr = prev1 + prev2;
		count++;
	}

	printf("%u\n", curr);

	return (0);
}
