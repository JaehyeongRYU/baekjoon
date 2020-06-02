#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {

	int n;
	cin >> n;
	stack<int>sta;
	string str;
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			sta.push(num);
		}
		else if (str == "pop") {
			if (!sta.empty()) {
				cout<< sta.top() << endl;
				sta.pop();
			}
			else
				cout << "-1"<<endl;
		}
		else if (str=="size") {
			cout << sta.size()<< endl;
		}
		else if (str == "empty") {
			if (!sta.empty()) {
				cout << '0'<<endl;
			}
			else
				cout << '1'<<endl;
		}
		else if (str == "top") {
			if (!sta.empty())
				cout << sta.top()<< endl;
			else
				cout << "-1" << endl;
		}

	}

	return 0;
}