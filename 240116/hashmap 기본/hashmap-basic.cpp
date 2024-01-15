#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

unordered_map<long long,long long> m;
long long n, input1, input2;
string str;

cin >> n;

for(long long i = 0; i < n; i++)
{
    cin >> str;
    if(str == "add")
    {
        cin >> input1 >> input2;
        m[input1] = input2;
    }
    else if(str == "find")
    {
        cin >> input1;
        if(m.find(input1) != m.end()){
            cout << m[input1];
        }
        else{
            cout << "None";
        }
        cout <<'\n';
    }
    else if(str == "remove")
    {
        cin >> input1;
        m.erase(input1);
    }
}

}