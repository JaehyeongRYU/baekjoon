#include <iostream>
using namespace std;
int main() {
	
	int n,re;
	cin >> n;
	
	int big = n / 5;
	while (big >= 0) {
		re = n - (5 * big);

		if (re % 3 == 0) {
			cout << big + re / 3 << endl;
			return 0;
		}
		big--;
	}
	if (big < 0) {
		cout << -1 << endl;
	}
	return 0;




	return 0;
}