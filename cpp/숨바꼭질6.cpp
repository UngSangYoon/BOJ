#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	int n, s, d;
	int a[100000];
	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (s - a[i] < 0)
			a[i] = a[i] - s;
		else
			a[i] = s - a[i];
	}

	if (n == 1)
		d = a[0];

	else if ( n ==2)
		d = gcd(a[0], a[1]);
	
	else{
		d = gcd(a[0], a[1]);

		for (int i = 2; i < n; i++)
			d = gcd(d, a[i]);
	}

	cout << d;
}