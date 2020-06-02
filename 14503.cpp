#include <iostream>
using namespace std;
int main()
{
	int arr[50][50];
	bool clean[50][50];
	int r=0, c=0,d=0;
	int n, m;
	int count = 0;
	cin >> n >> m;

	cin >> r >> c >> d;

	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			clean[i][j] = false;
		}
		cout << endl;
	}

	while (1)
	{
		if (!clean[r][c]) {
			clean[r][c] = true;
			count++;
		}

		if (d == 0)
		{
			if (arr[r][c - 1] == 0 && !clean[r][c - 1])
			{
				c--;
				d = 3;
				continue;
			}
			else if ((arr[r - 1][c] == 1 || clean[r - 1][c])
				&& (arr[r + 1][c] == 1 || clean[r + 1][c])
				&& (arr[r][c - 1] == 1 || clean[r][c - 1])
				&& (arr[r][c + 1] == 1 || clean[r][c + 1])) {

				if (arr[r + 1][c] == 1)
					break;
				else {
					r++;
					continue;
				}
			}
			else {
				d = 3;
			}
		}
		else if (d == 1)
		{
			if (arr[r - 1][c] == 0 && !clean[r - 1][c])
			{
				r--;
				d = 0;
				continue;
			}
			else if ((arr[r - 1][c] == 1 || clean[r - 1][c])
				&& (arr[r + 1][c] == 1 || clean[r + 1][c])
				&& (arr[r][c - 1] == 1 || clean[r][c - 1])
				&& (arr[r][c + 1] == 1 || clean[r][c + 1])) {

				if (arr[r][c - 1] == 1)
					break;
				else {
					c--;
					continue;
				}
			}
			else {
				d = 0;
			}
		}
		else if (d == 2)
		{
			if (arr[r][c + 1] == 0 && !clean[r][c + 1])
			{
				c++;
				d = 1;
				continue;
			}
			else if ((arr[r - 1][c] == 1 || clean[r - 1][c])
				&& (arr[r + 1][c] == 1 || clean[r + 1][c])
				&& (arr[r][c - 1] == 1 || clean[r][c - 1])
				&& (arr[r][c + 1] == 1 || clean[r][c + 1])) {

				if (arr[r - 1][c] == 1)
					break;
				else {
					r--;
					continue;
				}
			}
			else {
				d = 1;
			}
		}
		else if (d == 3)
		{
			if (arr[r + 1][c] == 0 && !clean[r + 1][c])
			{
				r++;
				d = 2;
				continue;
			}
			else if ((arr[r - 1][c] == 1 || clean[r - 1][c])
				&& (arr[r + 1][c] == 1 || clean[r + 1][c])
				&& (arr[r][c - 1] == 1 || clean[r][c - 1])
				&& (arr[r][c + 1] == 1 || clean[r][c + 1])) {

				if (arr[r][c + 1] == 1)
					break;
				else {
					c++;
					continue;
				}
			}
			else {
				d = 2;
			}
		}

	}

	cout << count << endl;


	return 0;
}