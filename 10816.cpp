#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n;
	vector<int>v1(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << upper_bound(v1.begin(), v1.end(), num) - lower_bound(v1.begin(), v1.end(), num) << " ";
	}
	cout << "\n";

	return 0;
}