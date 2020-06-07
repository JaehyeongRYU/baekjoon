#include <iostream>
#include <queue>

using namespace std;

int main() {
	int count = 0;
	int test_case;
	cin >> test_case;
	int n, m, ipt;//������ ����, �ñ��� ���� ��ġ, �߿䵵
	for (int i = 0; i < test_case; ++i) {
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>> q;//index�� �߿䵵 ��
		priority_queue<int> pq; // �켱���� ť
		for (int j = 0; j < n; ++j) {
			cin >> ipt;
			q.push({ j, ipt });
			pq.push(ipt);
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				++count;
				if (index == m) {
					cout << count << endl;
					break;
				}
			}
			else q.push({ index,value });
		}
	}
}
/* Ǯ�� : 
1. �߿䵵�� ���� ��µǴ� ������ �ٸ��Ƿ� �켱���� ť�� ����Ѵ�.
C++ STL�� queue�� priority_queue�� ����Ѵ�.
2. ���� q�� ���ҵ��� �Է¹��� �� pair�� �̿��Ͽ� �ε����� �߿䵵 ���� ������ �Է� �ް� q�� push ���ش�.
3. �׸��� prioirity_queue<int> pq; �� ���� �켱���� ť�� �����Ѵ�. �켱���� ť���� �߿䵵 ���� push ���ش�.
4. q�� ���Ұ� 0���� �ƴѵ��� ������ ����. q�� ���� ���� ���� ���� ��, ���� �տ� �ִ� ������ �ε����� �߿䵵 ���� ���� nowidx, nowval�� �����Ѵ�.
5. �� �� ���� �տ� �ִ� ���Ҹ� pop�� ����Ͽ� �����Ѵ�.
6. ���� ���ǹ��� �����ϴµ� ���� �߿䵵 ���� pq ��, �켱���� ť�� ���� ���� �ִ� ����(�켱���� ���� ���� ����)�� ���� ������ pq.pop()�� �������ش�. �� �� ��¼����� �ϳ� �÷��ְ� nowidx�� ���ϰ��� �ϴ� M���� ���ٸ� ������ְ� �ݺ����� Ż���Ѵ�.
7. ���� �켱������ pq�� top�� ���� �ʾҴٸ� q���� pop�� ���� �����ߴ� ���Ҹ� �ٽ� push �Ͽ� �ڷ� �־��ش�.
8. ����, ������ test case���� �������� q�� ����ְ� �� ���̹Ƿ� ���� �ʱ�ȭ�� ���� �ʾƵ� �ȴ�.*/