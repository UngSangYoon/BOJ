#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	// ���� 1000������ ��� �Ҽ��� ���� (�����佺�׳׽��� ü)
	bool prime[1001] = { 0, }; // ���� false�� prime�� �ε����� �Ҽ��� ��Ÿ��

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
	prime[1] = true; // 1�� �Ҽ��� �ƴ�

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