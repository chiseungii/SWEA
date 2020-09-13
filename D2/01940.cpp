#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		int velocity = 0, distance = 0;
		for (int i = 0; i < N; i++) {
			int a; cin >> a;

			if (a != 0) {
				int b; cin >> b;

				if (a == 1) velocity += b;
				else {
					velocity -= b;
					if (velocity < 0) velocity = 0;
				}
			}
			distance += velocity;
		}

		printf("#%d %d\n", tc + 1, distance);
	}
}
