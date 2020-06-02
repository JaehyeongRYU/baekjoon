#include <iostream>
using namespace std;
int main()
{
	int N,M=0;
	int C=0;
	cin >> N;
	
	if (N % 2 == 0)
	{
		for (int i = 0; i < N / 2; i++)
		{
			cout << 1;
		}
	}
	else
	{
		cout << 7;

		for (int i = 0; i < N / 2-1; i++)
		{
			cout << 1;
		}
	}
	cout << endl;

	return 0;
}
/*
0: 6번
1: 2번
2: 5번
3: 5번
4: 4번
5: 5번
6: 6번
7: 3번
8: 7번
9: 6번

*/