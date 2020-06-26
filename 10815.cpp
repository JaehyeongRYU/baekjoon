#include<iostream>
#include<algorithm>

using namespace std;

int arr1[500001];
int arr2[500001];

void binarySearch(const int& N, const int& K) {
	int first = 0;
	int last = N - 1;
	int mid = 1;
	while (first <= last) {
		mid = (first + last) / 2;
		//cout << mid << endl;
		if (arr1[mid] == K) {
			cout << "1\n";
			return;
		}
		else {
			if (arr1[mid] > K)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	cout << "0\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr1[i];
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> arr2[i];
	}

	sort(arr1, arr1 + N);
	for (int i = 0; i < M; i++) {
		binarySearch(N, arr2[i]);
	}

}
