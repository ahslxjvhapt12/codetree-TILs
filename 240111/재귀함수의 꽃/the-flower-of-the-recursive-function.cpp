#include <iostream>

using namespace std;

void Fun(int n){
if(n == 0) return;
cout << n << ' ';
Fun(n-1);
cout << n << ' ';
}

int main() {
    int n;
    cin >> n;
    Fun(n);
}