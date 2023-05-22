#include <stdio.h>

int find_min_index(int arr[], int arr_size);

int main(void)
{
	int A[50];
	int P[50];
	int N, i, j, min, index;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	
	for (i = 0; i < N; i++)
	{
		P[find_min_index(A, N)] = i;
		A[find_min_index(A, N)] = 1001;
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", P[i]);
	}

	return 0;
}

int find_min_index (int arr[], int arr_size)
{
	int min = 1001;
	int index, i , j;

	for (i = 0; i < arr_size; i++)
	{
		for (j = i; j < arr_size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
	}
	return index;
}