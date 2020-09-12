#include <iostream>
using namespace std;

#define NUM_OF_MONEY 8

int money[NUM_OF_MONEY] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		printf("#%d\n", tc + 1);
		for (int i = 0; i < NUM_OF_MONEY; i++) {
			cout << N / money[i] << ' ';
			N %= money[i];
		}
		cout << endl;
	}
}
