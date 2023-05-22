#include <stdio.h>

int main(void)
{
	int T, a, b;
	int result;
	int i;

	scanf("%d", & T);

	for (i = 0; i < T; i++)
	{
		while (1)
		{
			scanf("%d %d", &a, &b);

			if (a >= 1 && a < 100 && b >= 1 && b < 1000000)
			{
				break;
			}
		}
		
		if (a % 10 == 0)
			result = 10;

		else if (a % 10 == 1)
			result = 1;

		else if (a % 10 == 2)
		{
			if (b % 4 == 1)
				result = 2;

			else if (b % 4 == 2)
				result = 4;

			else if (b % 4 == 3)
				result = 8;

			else if (b % 4 == 0)
				result = 6;
		}

		else if (a % 10 == 3)
		{
			if (b % 4 == 1)
				result = 3;

			else if (b % 4 == 2)
				result = 9;

			else if (b % 4 == 3)
				result = 7;

			else if (b % 4 == 0)
				result = 1;
		}

		else if (a % 10 == 4)
		{
			if (b % 2 == 1)
				result = 4;

			else
				result = 6;
		}

		else if (a % 10 == 5)
			result = 5;

		else if (a % 10 == 6)
			result = 6;

		else if (a % 10 == 7)
		{
			if (b % 4 == 1)
				result = 7;

			else if (b % 4 == 2)
				result = 9;

			else if (b % 4 == 3)
				result = 3;

			else if (b % 4 == 0)
				result = 1;
		}

		else if (a % 10 == 8)
		{
			if (b % 4 == 1)
				result = 8;

			else if (b % 4 == 2)
				result = 4;

			else if (b % 4 == 3)
				result = 2;

			else if (b % 4 == 0)
				result = 6;
		}

		else if (a % 10 == 9)
		{
			if (b % 2 == 1)
				result = 9;

			else
				result = 1;
		}
		
		printf("%d", result);
	}

	return 0;
}