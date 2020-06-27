#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,c, arr[100001];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	c = arr[0];
	cout << c << ' ';
	for (int i = 1; i < n; i++) {
		
		if (c != arr[i]) {
			cout << arr[i] << ' ';
			c = arr[i];
		}
		
	}

	return 0;
}