#include <iostream>
#include <string>

using namespace std;

int main() {

	while (1) {
		string s;
		cin >> s;
		if(s =="0")
			break;
		int n = 0;
		for (int i = 0; i < s.size(); i++) {
			n += s.at(i) - '0';
		}
		while (n > 9) {
			int nn = n;
			n = 0;
			for (; nn != 0; nn /= 10)
				n += nn % 10;
		}
		cout << n << '\n';
	}



	return 0;
}