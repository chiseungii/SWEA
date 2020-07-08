#include <iostream>
using namespace std;

int main() {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int date; cin >> date;

		int year = date / 10000;
		int month = date % 10000 / 100;
		int day = date % 100;

		if (month > 12 || day > days[month - 1])
			printf("#%d -1\n", i + 1);
		else
			printf("#%d %04d/%02d/%02d\n", i + 1, year, month, day);
	}
}
