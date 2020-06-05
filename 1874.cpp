#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;

	ios_base::sync_with_stdio(false);//출력속도 빠르게
	cin.tie(0);//출력속도 빠르게

	int a;
	stack<int> s;
	char actions[200000];//+,- 저장 배열
	int actionSize = 0;
	int next = 1;//스택에 안 들어간 최소 숫자
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