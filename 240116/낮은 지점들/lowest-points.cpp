#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    unordered_map<long long, long long> m;

    long long n, x, y, sum = 0;
    cin >> n;
    
    for(long long i = 0; i < n; i++){
        cin >> x >> y;

        if(m.find(x) != m.end())
        {
            m[x] = min(y, m[x]);
        }
        else{
            m[x] = y;
        }
    }

    for(auto item : m){
        sum += item.second;
    }

    cout << sum;

}