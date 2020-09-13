#include <iostream>
using namespace std;

bool isPan(string s) {
	for (int i = 0; i < s.length() / 2; i++)
		if (s[i] != s[s.length() - i - 1])
			return false;

	return true;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		string s; cin >> s;
		printf("#%d %d\n", tc + 1, isPan(s));
	}
}
