#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			int n; cin >> n;
			if (n % 2) sum += n;
		}

		printf("#%d %d\n", i + 1, sum);
	}
}
