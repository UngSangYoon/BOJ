#include <iostream>
using namespace std;

int main(void)
{

	//먼저 에라토스테네스의 체 구현
	bool check[1000000] = { 0};
	for (int i = 2; i*i <= 1000000; i++) {
		if (check[i] == false) {
			for (int j = i * i; j <= 1000000; j += i) {
				check[j] = true;
			}
		}
	}
	check[1] = true; // 1은 소수가 아님

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	int test_count = 0;
	while(1)
	{
		cin >> test_case;

		if (test_case == 0)
		{
			break;
		}

		bool chk = false;

		for (int i = 3; i <= test_case; i += 2)
		{
			if (check[i]==false && check[test_case - i] == false)
			{
				cout << test_case << " = " << i << " + " << test_case - i << endl;
				chk = true;
				break;
			}
		}
		if (chk == false)
		{
			cout << "Goldbach's conjecture is wrong." << endl;
		}
	}
	return 0;
}