#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<int, int> m;

	int a, b;
	cin >> a >> b;

	int number = 0;

	for (int i = 0; i < a; i++)
	{
		cin >> number;
		m[number]++;
	}

	int cnt = a + b;
	for (int i = 0; i < b; i++)
	{
		cin >> number;
		if (++m[number] == 2) {
			cnt -=2;
		}
	}
	cout << cnt;
}