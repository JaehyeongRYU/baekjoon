#include <iostream>
using namespace std;
int main() {

	int a, b, v;
	int day = 0;
	cin >> a >> b >> v;

	while (1) {
		v = v - a;
		if (v == 0) {
			break;
		}
		v = v + b;
		day++;
	}
	cout << day;

	return 0;
}



