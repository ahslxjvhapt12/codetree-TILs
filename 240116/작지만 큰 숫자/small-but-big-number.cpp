#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> numberSet;
    int n, m, number;

    cin >> n >> m;

    while (n--) {
        cin >> number;

        numberSet.insert(number);
    }

    while (m--) {
        cin >> number;

        auto iterator = numberSet.upper_bound(number);

        if (iterator == numberSet.begin()) {
            cout << -1 << '\n';
        }
        else {
            cout << *(--iterator) << '\n';

            numberSet.erase(iterator);
        }
    }
}