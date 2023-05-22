#include <stdio.h>

int main(void)
{
	int factor[50];
	int num_factor, i, j, temp;

	scanf("%d", &num_factor);

	for (i = 0; i < num_factor; i++)
		scanf("%d", &factor[i]);

	factor[num_factor] = 1000000;

	for (i = num_factor; i > 0; i--)
		for (j = 0; j < i; j++)
			if (factor[j] > factor[j + 1])
			{
				temp = factor[j];
				factor[j] = factor[j + 1];
				factor[j + 1] = temp;
			}

	printf("%lld", factor[0] * factor[num_factor - 1]);
		
	return 0;
}