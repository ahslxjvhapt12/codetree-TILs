#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
int n, input;
vector<int> v;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> input;
    v.push_back(input);
    if(i%2==0)
    {
        sort(v.begin(), v.end());
        cout << v[i / 2]<<' ';
    }
}    
}