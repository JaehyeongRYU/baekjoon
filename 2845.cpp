#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,p;
	cin >> n >> p;
	int g = n * p;
	int gnum;
	for (int i = 0; i < 5; i++) {
		cin >> gnum;
		cout << gnum - g << ' ';
	}


	return 0;
}