#include <iostream>
#include <algorithm>
using namespace std;


long long factorial_two(long long num)
{
	long long result = 0;
	for (long long i = 2; i <= num; i *= 2) {
		result += num / i;
	}
	return result;
}

long long factorial_five(long long num)
{
	long long result = 0;
	for (long long i = 5; i <= num; i *= 5) {
		result += num / i;
	}
	return result;
}

int main(void)
{
	long long n, m;
	cin >> n >> m;
	long long two = 0;
	long long five = 0;

	two = factorial_two(n) - factorial_two(m) - factorial_two(n - m);
	five = factorial_five(n) - factorial_five(m) - factorial_five(n - m);

	cout << min(two, five);
	return 0;
}