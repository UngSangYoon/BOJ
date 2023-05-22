#include <stdio.h>

struct condo
{
	int distance;
	int cost;
};


int main(void)
{
	int N;
	int i, j;
	int check;
	int cnt = 0;

	scanf("%d", &N);

	struct condo arr[10000];

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].distance, &arr[i].cost);
	}
	for (i = 0; i < N; i++)
	{
		check = 1;

		for (j = 0; j < N; j++)
		{
			if (j != i)
			{
				if (arr[i].distance >= arr[j].distance)
				{
					if (arr[i].cost >= arr[j].cost)
					{
						check = 0;
						break;
					}

				}
				else
					continue;
			}
		}
		if (check == 1)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
