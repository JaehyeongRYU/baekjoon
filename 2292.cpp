#include <iostream>
using namespace std;
int main() {

	int n;
	int cnt = 1;
	int range = 1;
	int tmp = 1;
	cin >> n;

	while (1) {
		if (range >= n) {
			break;
		}
		tmp = 6 * (cnt++);
		range += tmp;
	}
	cout << cnt;
	
	return 0;
}