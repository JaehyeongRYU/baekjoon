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

	sort(arr, arr + N);//������������ ���ĵ��־�� �̺�Ž�� ��� ����

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		binarySearch(temp);
	}

	return 0;
}
/*
Ǯ��(
- Linear Search�� �ð� �ʰ��� ���� ���� - > ���� Ž�� �̿� �ʼ�
1. ���� testcase �Է¹ް�, N��ŭ �Է��� �޾� �迭�� ����
2. <algorithm>�� ���� �ִ� sort ����Ͽ� �迭�� ������������ ����
3. M�� �Է� ���� ��, M��ŭ �Է��� �޾� ����Ž�� ����
4. ����Ž������ key���� ã���� 1���, �� ã���� 0���
*/