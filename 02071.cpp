#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			int a; cin >> a;
			sum += a;
		}

		double avg = (double)sum / 10.0 + 0.5;
		printf("#%d %d\n", i + 1, (int)avg);
	}
}
