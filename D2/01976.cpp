#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int hour_1, min_1, hour_2, min_2;
		cin >> hour_1 >> min_1 >> hour_2 >> min_2;

		min_1 += hour_1 * 60;
		min_2 += hour_2 * 60;

		int sum = min_1 + min_2;
		int hour_res = sum / 60;
		while (hour_res > 12) hour_res -= 12;
		int min_res = sum % 60;

		printf("#%d %d %d\n", tc + 1, hour_res, min_res);
	}
}
