#include <iostream>
using namespace std;
int main(){

	int input;
	int arr[42] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		arr[input % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
		count += arr[i];
	
	cout << count;

	return 0;
}