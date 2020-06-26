#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {

	int n, arr1[50], arr2[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> arr2[i];
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n, desc);

	int s = 0;
	for (int i = 0; i < n; i++) {
		s += arr1[i] * arr2[i];
	}
	cout << s;
	return 0;
}