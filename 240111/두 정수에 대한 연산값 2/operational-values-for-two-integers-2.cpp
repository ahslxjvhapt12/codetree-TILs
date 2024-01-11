#include <iostream>

using namespace std;

void REF(int& a,int& b){
    a += 10;
    b *= 2;
}
int main() {
    int a, b;
    cin >> a >> b;
    REF(a,b);
    cout << a << " " << b;
}