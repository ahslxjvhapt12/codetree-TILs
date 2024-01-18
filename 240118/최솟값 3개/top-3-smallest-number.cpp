#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
		if (v.size() < 3) {
			cout << -1 << '\n';
		}
		else {
			sort(v.begin(), v.end());
			cout << v[0] * v[1] * v[2] << '\n';
		}
	}
}