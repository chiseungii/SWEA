#include <iostream>
#include <algorithm>
using namespace std;

int nums[50];

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;
		for (int i = 0; i < N; i++)
			cin >> nums[i];

		sort(nums, nums + N);
		printf("#%d ", tc + 1);
		for (int i = 0; i < N; i++)
			cout << nums[i] << ' ';
		cout << endl;
	}
}
