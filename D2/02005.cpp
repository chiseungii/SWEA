#include <iostream>
using namespace std;

int triangle[10][10];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		printf("#%d\n", tc + 1);
		triangle[0][0] = 1;
		cout << 1 << endl;

		for (int i = 1; i < N; i++) {
			triangle[i][0] = 1;
			cout << 1 << ' ';

			for (int j = 1; j < i; j++) {
				triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
				cout << triangle[i][j] << ' ';
			}

			triangle[i][i] = 1;
			cout << 1 << endl;
		}
	}
}
