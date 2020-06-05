#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		
		int sum = 0;
		cin >> str;
		for (int j = 0; j < str.size() && sum >= 0; j++) {
			if (str[j] == '(')
				sum++;
			else
				sum--;
		}
		
		
		
		if (sum==0) {
			cout << "YES" << "\n";
		}
		else
			cout << "NO"<< "\n";

	}

	return 0;
}