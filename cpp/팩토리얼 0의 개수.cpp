#include <iostream>
using namespace std;

int main(void)
{
	int N; // N!�� 0�� ������ ���Ѵ�.
	cin >> N;
	int num_of_0 = 0;

	for (int i = 5; i <= N; i *= 5) { // N�� 500������ ���� �����ϸ� i�� �ִ� 125�̴�.
		num_of_0 += N / i;
	} 

	cout << num_of_0;
}