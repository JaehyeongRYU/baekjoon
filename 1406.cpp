#include<iostream>
#include<string>
#include<list>
using namespace std;

int main() {
	int n;
	string s; //초기 입력 문자열

	cin >> s; //abcd
	cin >> n;
	
	list<char>lt(s.begin(), s.end());//입력한 문자열을 리스트로
	auto cursor = lt.end();

	while (n--) {// 명령의 수 만큼 반복 
		char cmd;
		cin >> cmd; //명령어 입력 

		if (cmd == 'L') {
			if (cursor != lt.begin()) {
				cursor--;
			}
		}
		else if (cmd == 'D') {
			if (cursor != lt.end()) {
				cursor++;
			}
		}
		else if (cmd == 'B') {
			if (cursor != lt.begin()) {
				cursor--;
				lt.erase(cursor);
				cursor++;
			}
		}
		else  if (cmd == 'P') {
			char x;
			cin >> x;
			lt.insert(cursor, x);
		}
	}
	for (auto& x : lt) {
		cout << x;
	}

	return 0;
}
