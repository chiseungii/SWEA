#include <iostream>
using namespace std;

int nums[7][7];

int rotate_90[7][7];
int rotate_180[7][7];
int rotate_270[7][7];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> nums[i][j];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				rotate_90[i][j] = nums[N - j - 1][i];
				rotate_180[i][j] = nums[N - i - 1][N - j - 1];
				rotate_270[i][j] = nums[j][N - i - 1];
			}
		}

		printf("#%d\n", tc + 1);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				cout << rotate_90[i][j];
			cout << ' ';
			for (int j = 0; j < N; j++)
				cout << rotate_180[i][j];
			cout << ' ';
			for (int j = 0; j < N; j++)
				cout << rotate_270[i][j];
			cout << endl;
		}
	}
}
