#include <iostream>
using namespace std;
int main()
{
	int score;
	cin >> score;

	if (score > 89)
		cout << 'A';
	else if (score > 79 && score < 90)
		cout << 'B';
	else if (score > 69 && score < 80)
		cout << 'C';
	else if (score > 59 && score < 70)
		cout << 'D';
	else
		cout << 'F';


	return 0;
}