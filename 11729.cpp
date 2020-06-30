#include <iostream>

using namespace std;

void hanoi(int n, int start, int mid, int end) {
	if (n == 1)
		cout << start << " " << end << "\n";
	else {
		hanoi(n - 1, start, end, mid);//n-1개를 2번째 기둥으로 이동
		cout << start << " " << end << "\n";//1번 기둥에 남은 1개를 3번 기둥으로 이동
		hanoi(n - 1, mid, start, end);//2번 기둥에 있는 것을 3번 기둥으로 이동
	}
}

int main() {

	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(n, 1, 2, 3);

	return 0;
}