#include <iostream>
using namespace std;

int days[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int month_1, day_1, month_2, day_2;
		cin >> month_1 >> day_1 >> month_2 >> day_2;

		int day = 0;
		for (int i = month_1; i < month_2; i++)
			day += days[i - 1];
		day += day_2 - day_1 + 1;

		printf("#%d %d\n", tc + 1, day);
	}
}
