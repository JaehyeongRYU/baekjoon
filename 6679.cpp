#include <iostream>

using namespace std;

int cal(int i, int n) {
	int result = 0;
	while (i) {
		result += i % n;
		i /= n;
	}
	return result;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 1000; i < 10000; i++) {
		int ten = cal(i, 10);
		if (ten == cal(i, 12) && ten == cal(i, 16))
			cout << i << '\n';
		
	}
	
	return 0;
}