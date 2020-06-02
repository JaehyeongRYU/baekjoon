#include <iostream>
using namespace std;
int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int Num = a * b * c;
	int arr[10] = {0};

	while (Num!=0)
	{
		arr[Num % 10]++;
		Num = Num / 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}





	return 0;
}