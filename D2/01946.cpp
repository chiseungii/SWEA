#include <iostream>
#include <vector>
using namespace std;

#define MAX_WIDTH 10

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		vector<pair<char, int>> input;
		for (int i = 0; i < N; i++) {
			char c; int a;
			cin >> c >> a;
			input.push_back(make_pair(c, a));
		}

		printf("#%d\n", tc + 1);
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < input[i].second; j++) {
				cnt++;
				cout << input[i].first;

				if (cnt == MAX_WIDTH) {
					cout << '\n';
					cnt = 0;
				}
			}
		}
		cout << '\n';
	}
}
