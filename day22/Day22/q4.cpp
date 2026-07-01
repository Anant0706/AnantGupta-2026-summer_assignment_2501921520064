#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char ch : s) {
        if (ch != ' ')
            cout << ch;
    }

    return 0;
}