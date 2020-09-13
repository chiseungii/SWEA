#include <iostream>
using namespace std;

#define NO_CHECK 0
#define GARO_CHECK 1
#define SERO_CHECK 2
#define ALL_CHECK 3

int board[15][15];	// 1 흰색, 0 검은색
int check[15][15];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// input
		int N, K; cin >> N >> K;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> board[i][j];

		// init
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				check[i][j] = NO_CHECK;

		// 흰 부분 찾기
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] && check[i][j] != ALL_CHECK) {
					// 가로 확인
					if (check[i][j] != GARO_CHECK) {
						int tmp_cnt = 0;
						for (int k = j; k < N && board[i][k]; k++) {
							tmp_cnt++;
							if (check[i][k] == NO_CHECK) check[i][k] = GARO_CHECK;
							else if (check[i][k] == SERO_CHECK) check[i][k] = ALL_CHECK;
						}
						if (tmp_cnt == K) cnt++;
					}

					// 세로 확인
					if (check[i][j] != SERO_CHECK && check[i][j] != ALL_CHECK) {
						int tmp_cnt = 0;
						for (int k = i; k < N && board[k][j]; k++) {
							tmp_cnt++;
							if (check[k][j] == NO_CHECK) check[k][j] = SERO_CHECK;
							else if (check[k][j] == GARO_CHECK) check[k][j] = ALL_CHECK;
						}
						if (tmp_cnt == K) cnt++;
					}
				}
			}
		}

		printf("#%d %d\n", tc + 1, cnt);
	}
}
