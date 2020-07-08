#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b; cin >> a >> b;

		char op;
		if (a == b) op = '=';
		else if (a < b) op = '<';
		else op = '>';

		printf("#%d %c\n", i + 1, op);
	}
}
