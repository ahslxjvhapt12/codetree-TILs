#include <iostream>

using namespace std;
void Fun1(int n){
    if(n == 0)return;
    cout << n << ' ';
    Fun1(n-1);
}

void Fun2(int n){
    if(n == 0)return;
    Fun2(n-1);
    cout << n << ' ';
}

int main() {
    int n;
    cin >> n;
    Fun2(n);
    cout << '\n';
    Fun1(n);
}