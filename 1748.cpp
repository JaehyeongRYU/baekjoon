#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,k=1;
	cin >> n;
	int cnt = 0;
	while (k<=n) {
		cnt += n - k + 1;
		k *= 10;
	}
	cout << cnt << '\n';
	return 0;
}