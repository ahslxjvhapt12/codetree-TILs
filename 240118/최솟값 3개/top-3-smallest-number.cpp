#include <iostream>
#include <queue>

using namespace std;

int main() {

	priority_queue<long long, vector<long long>, greater<long long>> q;

	long long n, input;

	cin >> n;

	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		q.push(input);

		if (q.size() < 3) {
			cout << -1;
		}
		else {
			long long n1, n2, n3;
			n1 = q.top();
			q.pop();
			n2 = q.top();
			q.pop();
			n3 = q.top();
			q.pop();

			cout << n1 * n2 * n3;
			q.push(n1);
			q.push(n2);
			q.push(n3);
		}

		cout << '\n';
	}
}