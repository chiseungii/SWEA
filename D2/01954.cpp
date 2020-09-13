#include <iostream>
using namespace std;

int snail[10][10];

int di[4] = { 0, 1, 0, -1 };
int dj[4] = { 1, 0, -1, 0 };

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		// init
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				snail[i][j] = 0;

		// draw snail
		int index_i = 0, index_j = 0;
		int dir = 0;
		for (int i = 1; i <= N * N; i++) {
			if (index_i < 0 || index_i >= N) {
				i--; index_i -= di[dir];
				dir++; dir %= 4;
			}
			else if (index_j < 0 || index_j >= N) {
				i--; index_j -= dj[dir];
				dir++; dir %= 4;
			}
			else if (snail[index_i][index_j]) {
				i--;
				index_i -= di[dir];
				index_j -= dj[dir];
				dir++; dir %= 4;
			}
			else {
				snail[index_i][index_j] = i;
			}

			index_i += di[dir];
			index_j += dj[dir];
		}

		// print
		printf("#%d\n", tc + 1);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				cout << snail[i][j] << ' ';
			cout << endl;
		}
	}
}
