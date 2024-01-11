#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

vector <pair<string, pair<string, string>>> v;
int main() {
    int testcase = 0;
    cin >> testcase;
    string a, b, c;
    for (int i = 0; i < testcase; i++)
    {
        cin >> a >> b >> c;
        if(c == "Rain")
            v.push_back({ a,{b,c} });
    }
    sort(v.begin(), v.end());
    cout << v.begin()->first << " " << v.begin()->second.first << " " << v.begin()->second.second;
}