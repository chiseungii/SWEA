#include <iostream>
#include <algorithm>
using namespace std;

int nums[10];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		for (int i = 0; i < 10; i++)
			cin >> nums[i];
		sort(nums, nums + 10);

		int sum = 0;
		for (int i = 1; i < 9; i++)
			sum += nums[i];

		double avg = (double)sum / 8. + 0.5;

		printf("#%d %d\n", tc + 1, (int)avg);
	}
}
