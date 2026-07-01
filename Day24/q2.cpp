#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int count = 1;
        while (i + 1 < s.length() && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        cout << s[i];
        if (count > 1)
            cout << count;
    }

    return 0;
}