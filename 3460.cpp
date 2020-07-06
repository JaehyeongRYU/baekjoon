#include <iostream>

using namespace std;

int main() {
	
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int idx = 0;
		while (n > 0) {
			if (n % 2 == 1)
				cout << idx << ' ';
			n = n / 2;
			idx++;
		}
		cout << '\n';
	}

	return 0;
}