#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int num = 1; cout << num << ' ';
	for (int i = 0; i < n; i++) {
		num *= 2;
		cout << num << ' ';
	}
	cout << endl;
}
