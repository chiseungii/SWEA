#include <iostream>
#include <string>
using namespace std;

#define FIRST 65536
#define SECOND 256

int base64(char c) {
	if (isdigit(c))
		return c - '0' + 52;
	else if (isalpha(c)) {
		if (isupper(c)) return c - 'A';
		else return c - 'a' + 26;
	}
	else if (c == '+') return 62;
	else return 63;
}

string decoding(string s) {
	int base_64 = 0;
	for (int i = 0; i < s.length(); i++)
		base_64 = base_64 * 64 + base64(s[i]);

	string result = "";
	result += (char)(base_64 / FIRST);

	base_64 %= FIRST;
	result += (char)(base_64 / SECOND);

	base_64 %= SECOND;
	result += (char)base_64;

	return result;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		string s; cin >> s;

		string result = "";
		for (int i = 0; i < s.length(); i += 4)
			result += decoding(s.substr(i, 4));

		printf("#%d ", tc + 1);
		cout << result << endl;
	}
}
