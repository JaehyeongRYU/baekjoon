#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;

	char arr[80];

	for (int i = 0; i < n; i++)
	{	
		int c = 0;
		int point=0;
		cin >> arr;
		for (int j = 0; arr[j] != '\0'; j++)
		{
			if (arr[j] == 'O')
				c++;
			else
				c = 0;

			point += c;
		}
		cout << point << endl;
	}



	return 0;
}