#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int max = 0;
		for (int j = 0; j < 10; j++) {
			int a; cin >> a;
			if (a > max) max = a;
		}

		printf("#%d %d\n", i + 1, max);
	}
}
