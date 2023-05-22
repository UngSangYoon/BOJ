#include <stdio.h>

int main(void)
{
	int S[50];
	int L, i, j, n, temp;

	scanf("%d", &L);

	for (i = 0; i < L; i++)
	{
		scanf("%d", &S[i]);
	}

	for (i = L; i > 0; i--)
		for (j = 0; j < i; j++)
			if (S[j] > S[j + 1])
			{
				temp = S[j];
				S[j] = S[j + 1];
				S[j + 1] = temp;
			}

	scanf("%d", &n);

	if (S[0] > n)
	{
		printf("0");
		return 0;
	}

	for (i = 0; i < L; i++)
	{
		if (S[i] > n)
		{
			
			printf("%d", (n - S[i - 1]) * (S[i] - n) - 1);

		}

		else if (S[i] == n)
			printf("0");
	}
	return 0;
}
