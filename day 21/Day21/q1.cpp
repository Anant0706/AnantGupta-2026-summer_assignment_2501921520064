#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;

    for (char ch : s)
        count++;

    cout << count;

    return 0;
}