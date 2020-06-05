#include <iostream>
#include <queue>
using namespace std;
/*
<queue>
pop : 큐에서 앞에 있는 원소를 삭제
push : 큐에서 맨 뒤에 원소를 추가
front : 큐 제일 앞에 있는 원소를 반환
back : 큐 제일 뒤에 있는 원소를 반환
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
		}//원형 큐처럼 구현
		
		cout << q.front();//< 다음 값 리턴

		q.pop();// 큐에서 리턴한 값 삭제
		if (!q.empty())
			cout << ", ";
	}
	cout << ">";

	return 0;
}