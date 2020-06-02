#include <iostream>
using namespace std;
int main()
{
	int N, C, cycle = 0;
	cin >> N;
	C = N;
	while (1)
	{
		N = (N%10)*10 + (N % 10 + N / 10)%10;
		cycle++;
		if (C == N)
			break;
	}
	cout << cycle;
	return 0;
}