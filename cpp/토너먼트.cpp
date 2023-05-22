#include <stdio.h>

int main(void)
{
	int N,i;
	int num1, num2;
	int round = 0;

	scanf("%d %d %d", &N, &num1, &num2);

	while (1)
	{
		num1 = num1 / 2 + num1 % 2;
		num2 = num2 / 2 + num2 % 2;
		round++;

		if (num1 == num2)
			break;
	}
	printf("%d", round);
	return 0;
}