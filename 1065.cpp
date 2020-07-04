#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	
	while (n) {

		if (n < 100)
			cnt++;
		else if(n >= 100 && n < 1000) {
			int a, b, c;
			a = n / 100;
			b = (n / 10) % 10;
			c = n % 10;
			if (b - a == c - b)
				cnt++;
			else if (a - b == b - c)
				cnt++;
		}
		n--;
	}

	cout << cnt << '\n';

	return 0;
}