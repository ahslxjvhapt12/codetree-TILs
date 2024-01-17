#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int binarySearch(int key, int n)
{
	int idx = -1;

	// 이진탐색을 진행합니다.
	int left = 0, right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (v[mid] == key) { // 찾았다면 해당 index를 반환합니다.
			idx = mid;
			break;
		}

		if (v[mid] > key) // 찾으려는 숫자가 더 작다면
			right = mid - 1;  // 왼쪽 구간으로 이동해야 합니다.
		else                  // 찾으려는 숫자가 더 크다면
			left = mid + 1;   // 오른쪽 구간으로 이동해야 합니다.
	}

	return (idx == -1) ? idx : idx + 1;
}

int main() {

	int n, m, input;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		cout << binarySearch(input, n) << '\n';
	}
}