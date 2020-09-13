#include <iostream>
using namespace std;

char check[10];

bool isFinish() {
	for (int i = 0; i < 10; i++)
		if (!check[i]) return false;

	return true;
}

void parseNum(int n) {
	while (n > 0) {
		check[n % 10] = 1;
		n /= 10;
	}
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// init
		for (int i = 0; i < 10; i++) check[i] = 0;

		int N; cin >> N;

		int cnt = 1;
		while (1) {
			parseNum(N * cnt);
			if (isFinish()) break;
			else cnt++;
		}

		printf("#%d %d\n", tc + 1, cnt * N);
	}
}
