#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int c;
	cin >> c;
	int n;
	int arr[1000];
	
	for (int i = 0; i < c; i++)
	{
		float avg = 0;
		int k = 0;

		cin >> n;
		
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			avg += arr[j];
		}
		avg = avg / n;

		for (int j = 0; j < n; j++)
		{
			if (arr[j] > avg)
			{
				k++;
			}
		}
		cout << fixed << setprecision(3) << (float)k / n * 100 << "%" << endl;
	}
	


	return 0;
}