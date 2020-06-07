#include<iostream>
#include<string>
#include<list>
using namespace std;

int main() {
	int n;
	string s; //�ʱ� �Է� ���ڿ�

	cin >> s; //abcd
	cin >> n;
	
	list<char>lt(s.begin(), s.end());//�Է��� ���ڿ��� ����Ʈ��
	auto cursor = lt.end();

	while (n--) {// ����� �� ��ŭ �ݺ� 
		char cmd;
		cin >> cmd; //��ɾ� �Է� 

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
