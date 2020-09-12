#include <iostream>
using namespace std;

#define SUM 45

int sudoku[9][9];

bool isRight() {
	// 가로 세로 체크
	for (int i = 0; i < 9; i++) {
		int sum_garo = 0, sum_sero = 0;
		for (int j = 0; j < 9; j++) {
			sum_garo += sudoku[i][j];
			sum_sero += sudoku[j][i];
		}

		if (sum_garo != SUM) return false;
		if (sum_sero != SUM) return false;
	}

	// 3 X 3 체크
	for (int i = 0; i < 9; i += 3) {
		for (int j = 0; j < 9; j += 3) {
			int sum = 0;
			for (int a = i; a < i + 3; a++)
				for (int b = j; b < j + 3; b++)
					sum += sudoku[a][b];

			if (sum != SUM) return false;
		}
	}

	return true;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				cin >> sudoku[i][j];

		printf("#%d %d\n", tc + 1, isRight());
	}
}
