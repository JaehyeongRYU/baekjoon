#include <iostream>

using namespace std;

void hanoi(int n, int start, int mid, int end) {
	if (n == 1)
		cout << start << " " << end << "\n";
	else {
		hanoi(n - 1, start, end, mid);//n-1���� 2��° ������� �̵�
		cout << start << " " << end << "\n";//1�� ��տ� ���� 1���� 3�� ������� �̵�
		hanoi(n - 1, mid, start, end);//2�� ��տ� �ִ� ���� 3�� ������� �̵�
	}
}

int main() {

	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(n, 1, 2, 3);

	return 0;
}