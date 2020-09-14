#include <iostream>
using namespace std;

string cntClap(int n) {
	string clap = "";
	while (n > 0) {
		if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
			clap += '-';
		n /= 10;
	}

	return clap;
}

int main() {
	int N; cin >> N;

	for (int i = 1; i <= N; i++) {
		string tmp = cntClap(i);
		if (tmp == "") cout << i << ' ';
		else cout << tmp << ' ';
	}
	cout << endl;
}
