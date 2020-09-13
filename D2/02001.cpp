#include <iostream>
using namespace std;

int flies[15][15];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// input
		int N, M; cin >> N >> M;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> flies[i][j];

		// cal
		int max_sum = 0;
		for (int i = 0; i <= N - M; i++) {
			for (int j = 0; j <= N - M; j++) {
				int sum = 0;
				for (int a = 0; a < M; a++)
					for (int b = 0; b < M; b++)
						sum += flies[a + i][b + j];

				if (sum > max_sum) max_sum = sum;
			}
		}

		printf("#%d %d\n", tc + 1, max_sum);
	}
}
