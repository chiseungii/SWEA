#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MIDDLE_TEST 0.35
#define FINAL_TEST 0.45
#define HOMEWORK 0.2

string grades[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };

bool compare(pair<int, double> p1, pair<int, double> p2) {
	return p1.second > p2.second;
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N, K; cin >> N >> K;

		vector<pair<int, double>> students;	// 학생 번호, 점수
		for (int i = 0; i < N; i++) {
			int a, b, c; cin >> a >> b >> c;

			double tmp_score;
			tmp_score = (double)a * MIDDLE_TEST + (double)b * FINAL_TEST + (double)c * HOMEWORK;

			students.push_back(make_pair(i + 1, tmp_score));
		}
		sort(students.begin(), students.end(), compare);

		for (int i = 0; i < students.size(); i++) {
			if (students[i].first == K) {
				int tmp = N / 10;
				cout << '#' << tc + 1 << ' ' << grades[i / tmp] << endl;
				break;
			}
		}
	}
}
