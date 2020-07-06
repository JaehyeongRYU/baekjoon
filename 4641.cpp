#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	string s;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
	
		cin >> s;
		cout << "String #" << i << '\n';
		for (int j = 0; j < s.length(); j++) {
			cout << (char)((s[j] - 'A' + 1) % 26 + 'A');
		}
		cout << "\n\n";
	}
	return 0;
}