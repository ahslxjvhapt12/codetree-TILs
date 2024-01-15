#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    long long n, m, input;
    unordered_map<long long, long long> map;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> input;
        map[input]++;
    }

    for(int i = 0; i < m; i++){
        cin >> input;
        if(map.find(input) != map.end()){
            cout << map[input];
        }
        else{
            cout << '0';
        }

        cout << ' ';
    }
}