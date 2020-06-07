#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[100001];

void binarySearch(int key) {
	int start = 0;
	int end = N - 1;
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;
		if (arr[mid] == key) {
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > key) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	cout << 0 << "\n";
	return;
}


int main() {

	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	
	cin >> N;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	sort(arr, arr + N);//오름차순으로 정렬되있어야 이분탐색 사용 가능

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		binarySearch(temp);
	}

	return 0;
}
/*
풀이(
- Linear Search로 시간 초과가 나는 문제 - > 이진 탐색 이용 필수
1. 먼저 testcase 입력받고, N만큼 입력을 받아 배열에 저장
2. <algorithm>에 속해 있는 sort 사용하여 배열을 오름차순으로 정렬
3. M값 입력 받은 후, M만큼 입력을 받아 이진탐색 실행
4. 이진탐색에서 key값을 찾으면 1출력, 못 찾으면 0출력
*/