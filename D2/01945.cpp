#include <iostream>
using namespace std;

int mods[5] = { 2, 3, 5, 7, 11 };
int cnt[5];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// init
		for (int i = 0; i < 5; i++) cnt[i] = 0;

		// input
		int N; cin >> N;

		for (int i = 0; i < 5; i++) {
			while (N % mods[i] == 0) {
				cnt[i]++;
				N /= mods[i];
			}
		}

		printf("#%d %d %d %d %d %d\n", tc + 1, cnt[0], cnt[1], cnt[2], cnt[3], cnt[4]);
	}
}
