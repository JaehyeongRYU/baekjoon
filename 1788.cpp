#include <iostream>
using namespace std;
long long arr[1000001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	arr[0] = 0;
	arr[1] = 1;

	int n;
	int s;
	cin >> n;

	if (n < 0)
		s = - n;
	else
		s = n;

	for (int i = 2; i <= s; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000000;
	}

	if (n > 0)
		cout << 1 << '\n';
	else if(n==0)
		cout << 0 << '\n';
	else {
		if((-n)%2==0)
			cout << -1 << '\n';
		else
			cout << 1 << '\n';
	}


	cout << arr[s] % 1000000000;


	return 0;
}

