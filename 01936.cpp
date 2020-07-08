#include <iostream>
using namespace std;

#define SCISSORS 1
#define ROCK 2
#define PAPER 3

int main() {
	int A, B; cin >> A >> B;

	if (A == SCISSORS) {
		if (B == ROCK) cout << "B\n";
		else cout << "A\n";
	}
	else if (A == ROCK) {
		if (B == SCISSORS) cout << "A\n";
		else cout << "B\n";
	}
	else {
		if (B == SCISSORS) cout << "B\n";
		else cout << "A\n";
	}
}
