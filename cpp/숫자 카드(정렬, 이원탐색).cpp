#include <iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int* arr, int x, int n)
{
	int left = 0, right = n - 1;
	while (left <= right) {
		int middle = (left + right) / 2;
		if (x < arr[middle])
			right = middle - 1;
		else if (x > arr[middle])
			left = middle + 1;
		else 
			return 1;
	}
	return 0;
}
int main(void) {
	int card_num, ask;
	int card[500001];
	int asked_num[500001];
	int ans[500001];
	
	cin >> card_num;
	for (int i = 0; i < card_num; i++) {
		cin >> card[i];
	}


	cin >> ask;
	for (int i = 0; i < ask; i++) {
		cin >> asked_num[i];
	}

	sort(card, card + card_num);

	for (int i = 0; i < ask; i++) {
		ans[i] = BinarySearch(card, asked_num[i], card_num);
	}

	for (int i = 0; i < ask; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}