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
		for (int j = 0; j < str.size(); j++) {//문자열 길이만큼 반복
			if (sum >= 0) {//sum이 음수면 여는 괄호보다 닫는게 많은 것
				if (str[j] == '(')
					sum++;
				else
					sum--;
			}
		}
		
		if (sum==0) {
			cout << "YES\n";
		}
		else
			cout << "NO\n";

	}

	return 0;
}