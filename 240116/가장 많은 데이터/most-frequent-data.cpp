#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    unordered_map <string, int> m;

    int cnt=-1;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> str;
        m[str]++;
    }

    for(auto item : m){
        if(item.second > cnt){
            cnt = item.second;
        }
    }
    cout << cnt;
}