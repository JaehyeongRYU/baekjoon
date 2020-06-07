#include <iostream>
#include <queue>

using namespace std;

int main() {
	int count = 0;
	int test_case;
	cin >> test_case;
	int n, m, ipt;//문서의 개수, 궁금한 문서 위치, 중요도
	for (int i = 0; i < test_case; ++i) {
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>> q;//index와 중요도 값
		priority_queue<int> pq; // 우선순위 큐
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
/* 풀이 : 
1. 중요도에 따라 출력되는 순서가 다르므로 우선순위 큐를 사용한다.
C++ STL의 queue와 priority_queue를 사용한다.
2. 먼저 q의 원소들을 입력받을 때 pair를 이용하여 인덱스와 중요도 값을 쌍으로 입력 받고 q에 push 해준다.
3. 그리고 prioirity_queue<int> pq; 와 같이 우선순위 큐를 선언한다. 우선순위 큐에는 중요도 값만 push 해준다.
4. q의 원소가 0개가 아닌동안 루프를 돈다. q의 가장 먼저 들어온 원소 즉, 가장 앞에 있는 원소의 인덱스와 중요도 값을 변수 nowidx, nowval에 저장한다.
5. 그 후 가장 앞에 있는 원소를 pop을 사용하여 제거한다.
6. 이제 조건문을 수행하는데 현재 중요도 값이 pq 즉, 우선순위 큐의 가장 위에 있는 원소(우선순위 가장 높은 원소)의 값과 같으면 pq.pop()을 수행해준다. 그 후 출력순서를 하나 늘려주고 nowidx가 구하고자 하는 M값과 같다면 출력해주고 반복문을 탈출한다.
7. 만약 우선순위가 pq의 top과 같지 않았다면 q에서 pop을 통해 제거했던 원소를 다시 push 하여 뒤로 넣어준다.
8. 또한, 각각의 test case마다 마지막엔 q가 비어있게 될 것이므로 따로 초기화는 하지 않아도 된다.*/