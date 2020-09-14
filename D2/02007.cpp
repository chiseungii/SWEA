#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		string s; cin >> s;

		string pattern = "";
		for (int i = 0; i < s.length(); i++) {
			pattern += s[i];
			if (s.substr(i + 1, pattern.length()) == pattern)
				break;
		}

		printf("#%d %d\n", tc + 1, pattern.length());
	}
}
