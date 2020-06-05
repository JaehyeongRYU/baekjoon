#include <iostream>
#include <queue>
using namespace std;
/*
<queue>
pop : ť���� �տ� �ִ� ���Ҹ� ����
push : ť���� �� �ڿ� ���Ҹ� �߰�
front : ť ���� �տ� �ִ� ���Ҹ� ��ȯ
back : ť ���� �ڿ� �ִ� ���Ҹ� ��ȯ
*/
int main() {
	int n, k;
	cin >> n >> k;
	queue<int>q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	cout << "<";
	while (!q.empty()) {

		for (int j = 0; j < k - 1; j++) {
			q.push(q.front());
			q.pop();
		}//���� ťó�� ����
		
		cout << q.front();//< ���� �� ����

		q.pop();// ť���� ������ �� ����
		if (!q.empty())
			cout << ", ";
	}
	cout << ">";

	return 0;
}