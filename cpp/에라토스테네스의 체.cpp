#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	// 먼저 1000이하의 모든 소수를 구함 (에라토스테네스의 체)
	bool prime[1001] = { 0, }; // 값이 false인 prime의 인덱스가 소수를 나타냄

	for (int i = 2; i <= 1000; i++)
	{
		if (prime[i] == false)
		{
			for (int j = i * i; j <= 1000; j += i)
			{
				prime[j] = true;
			}
		}
	}
	prime[1] = true; // 1은 소수가 아님

	int n;
	cin >> n;
	int np = 0;
	int input_num[100];

	for (int i = 0; i < n; i++)
	{
		cin >> input_num[i];
		if (prime[input_num[i]] == false)
		{
			np++;
		}
	}
	cout << np;
	return 0;
}