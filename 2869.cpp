#include <iostream>
using namespace std;
int main() {

	int a, b, v;
	int num = 0;
	cin >> a >> b >> v;

	num = (v - b - 1) / (a - b) + 1;

	cout << num;

	return 0;
}



