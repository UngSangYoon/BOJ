#include <iostream>
using namespace std;

int main(void) {
	int A[100][100];
	int D[100][100];
	int N, M;
	int x1, y1, x2, y2;

	// 배열 크기와 질의 개수 입력
	cin >> N >> M;

	// 숫자 배열 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}

	// 합 배열 구하기
	D[0][0] = A[0][0];
	for (int i = 1; i < N; i++) {
		D[0][i] = D[0][i - 1] + A[0][i]; // 1행의 합배열 구하기
		D[i][0] = D[i - 1][0] + A[i][0]; // 1열의 합배열 구하기
	}

	// 나머지 합 배열 구하기
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < N; j++) {
			D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		if (x1 == x2 && y1 == y2) {
			cout << A[x1 - 1][y1 - 1] << endl;
		}

		else {
			if (x1 == 1 && y1 == 1) {
				cout << D[x2 - 1][y2 - 1] << endl;
			}

			else if (x1 == 1 && y1 != 1) {
				cout << D[x2 - 1][y2 - 1] - D[x2][y1 - 2] << endl;
			}

			else if (x1 != 1 && y1 == 1) {
				cout << D[x2 - 1][y2 - 1] - D[x1 - 2][y2 - 1] << endl;
			}

			else
				cout << D[x2 - 1][y2 - 1] - D[x1 - 2][y2 - 1] - D[x2 - 1][y1 - 2] + D[x1 - 2][y1 - 2] << endl;
		}
	}

	return 0;
}