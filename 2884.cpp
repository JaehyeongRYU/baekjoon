#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	if (m >= 45) {
		m = m - 45;
		cout << h << ' ' << m;
	}
	else {
		h = h - 1;
		if (h == -1)
			h = 23;
		m = m + 15;
		cout << h << ' ' << m;
	}
		
	return 0;
}