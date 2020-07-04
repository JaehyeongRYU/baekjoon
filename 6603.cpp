#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 6;
int T;
int lotto[MAX];
int arr[13];

void printLotto(int i1, int i2) {
	if (i2 == MAX) {
		for (int i = 0; i < MAX; i++)
			cout << lotto[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = i1; i < T; i++) {
		lotto[i2] = arr[i];
		printLotto(i + 1, i2 + 1);
	}
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (1) {
		cin >> T;
		if (T == 0)  
			break;
		for (int i = 0; i < T; i++) {
			cin >> arr[i];
		}
		printLotto(0, 0);
		cout << '\n';
	}
	return 0;
}