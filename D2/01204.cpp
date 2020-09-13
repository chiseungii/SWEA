#include <iostream>
using namespace std;

int cnt_score[101];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// init
		cin >> cnt_score[0];
		for (int i = 0; i < 101; i++) cnt_score[i] = 0;

		// input
		for (int i = 0; i < 1000; i++) {
			int a; cin >> a;
			cnt_score[a]++;
		}

		int max_cnt = 0, max_score = -1;
		for (int i = 100; i >= 0; i--) {
			if (cnt_score[i] > max_cnt) {
				max_cnt = cnt_score[i];
				max_score = i;
			}
		}

		printf("#%d %d\n", tc + 1, max_score);
	}
}
