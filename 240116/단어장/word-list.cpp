#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    map<string, int> m;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> str;
        m[str]++;
    }

    for(auto item : m){
        cout << item.first << ' ' << item.second << '\n';
    }
}