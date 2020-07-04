#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char arr[102][102];
	int r, c, a, b;
	
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = c; j < 2 * c; j++) {
			arr[i][j] = arr[i][(c - 1) - (j - c)];
		}
	}
	for (int i = r; i < 2*r; i++) {
		for (int j = 0; j < 2*c; j++) {
			arr[i][j] = arr[(r - 1) - (i - r)][j];
		}
	}
	cin >> a >> b;

	if (arr[a-1][b-1] == '.')
		arr[a-1][b-1] = '#';
	else
		arr[a - 1][b - 1] = '.';

	
	for (int i = 0; i < 2 * r; i++) {
		for (int j = 0; j < 2 * c; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}


	return 0;
}

