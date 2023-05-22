#include <iostream>
using namespace std;

int main(void)
{
	int N; // N!의 0의 개수를 구한다.
	cin >> N;
	int num_of_0 = 0;

	for (int i = 5; i <= N; i *= 5) { // N은 500이하의 수라 가정하면 i는 최대 125이다.
		num_of_0 += N / i;
	} 

	cout << num_of_0;
}