#include <iostream>
using namespace std;

int cnt[100001];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// init
		for (int i = 0; i < 100001; i++) cnt[i] = 0;

		// input
		int N; cin >> N;
		for (int i = 0; i < N; i++) {
			int a; cin >> a;

			if (a < 0) a = -a;
			cnt[a]++;
		}

		// print
		int index = 0;
		for (; cnt[index] == 0; index++);
		printf("#%d %d %d\n", tc + 1, index, cnt[index]);
	}
}
