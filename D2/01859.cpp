#include <iostream>
using namespace std;

int prices[1000000];

int findMax(int start, int end) {
	int max = prices[start];
	for (int i = start + 1; i <= end; i++)
		if (prices[i] > max) max = prices[i];

	return max;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// input
		int N; cin >> N;
		for (int i = 0; i < N; i++)
			cin >> prices[i];

		// cal
		int cnt = 0, index = 0;
		long long tmp_price = 0, sum_price = 0;
		while (index < N) {
			// 남은 금액 중 가장 비싼 금액 찾기
			int max_price = findMax(index, N - 1);

			// 비싼 금액까지 무조건 삼
			for (; prices[index] != max_price; index++) {
				cnt++;
				tmp_price += prices[index];
			}
			// 비싼 금액날 다 팔아버림
			long long sell = cnt * prices[index++];
			sum_price += sell - tmp_price;

			cnt = tmp_price = 0;
		}

		printf("#%d %lld\n", tc + 1, sum_price);
	}
}
