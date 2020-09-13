#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;

		int A = W * P;
		int B = Q + (W > R)* (W - R)* S;

		printf("#%d %d\n", tc + 1, min(A, B));
	}
}
