#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;

	ios_base::sync_with_stdio(false);//��¼ӵ� ������
	cin.tie(0);//��¼ӵ� ������

	int a;
	stack<int> s;
	char actions[200000];//+,- ���� �迭
	int actionSize = 0;
	int next = 1;//���ÿ� �� �� �ּ� ����
	bool avail = true;//true : Yes, false : No
	for (int i = 0; i < n; i++) {
		cin >> a;

		if (!avail)
			continue;

		if (next > a && (s.empty() || s.top() != a)) {
			avail = false;
			continue;
		}

		while (next <= a) {
			s.push(next);
			actions[actionSize++] = '+';
			next++;
		}

		s.pop();
		actions[actionSize++] = '-';
	}

	if (avail) {
		for (int i = 0; i < actionSize; i++) {
			cout << actions[i] << '\n';
		}
	}
	else {
		cout << "NO\n";
	}

	return 0;
}