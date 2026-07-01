#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &ch : s)
        ch = toupper(ch);

    cout << s;

    return 0;
}