#include <iostream>
#include <algorithm>
using namespace std;

int A[20], B[20];	// A가 짧음

int max_num(int size_a, int size_b) {
	int max = 0;
	for (int i = 0; i <= size_b - size_a; i++) {
		int sum = 0;
		for (int j = 0; j < size_a; j++)
			sum += A[j] * B[i + j];

		if (sum > max) max = sum;
	}

	return max;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N, M; cin >> N >> M;

		int* p1, * p2;
		if (N <= M) {
			p1 = A;
			p2 = B;
		}
		else {
			p1 = B;
			p2 = A;
		}

		for (int i = 0; i < N; i++)
			cin >> p1[i];
		for (int i = 0; i < M; i++)
			cin >> p2[i];

		printf("#%d %d\n", tc + 1, max_num(min(N, M), max(N, M)));
	}
}
