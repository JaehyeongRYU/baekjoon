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
0: 6��
1: 2��
2: 5��
3: 5��
4: 4��
5: 5��
6: 6��
7: 3��
8: 7��
9: 6��

*/