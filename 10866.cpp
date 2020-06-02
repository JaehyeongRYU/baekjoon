#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {

	int n;
	cin >> n;
	deque<int>sta;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_front") {
			int num;
			cin >> num;
			sta.push_front(num);
		}
		else if (str == "push_back") {
			int num;
			cin >> num;
			sta.push_back(num);
		}
		else if (str == "pop_front") {
			if (!sta.empty()) {
				cout << sta.front() << "\n";
				sta.pop_front();
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "pop_back") {
			if (!sta.empty()) {
				cout << sta.back() << "\n";
				sta.pop_back();
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "size") {
			cout << sta.size() << "\n";
		}
		else if (str == "empty") {
			if (!sta.empty()) {
				cout << '0' << "\n";
			}
			else
				cout << '1' << "\n";
		}
		else if (str == "front") {
			if (!sta.empty())
				cout << sta.front() << "\n";
			else
				cout << "-1" << "\n";
		}
		else if (str == "back") {
			if (!sta.empty())
				cout << sta.back() << "\n";
			else
				cout << "-1" << "\n";
		}

	}

	return 0;
}