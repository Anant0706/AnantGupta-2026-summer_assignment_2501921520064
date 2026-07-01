#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;

    for (char ch : s) {
        if (!st.count(ch)) {
            cout << ch;
            st.insert(ch);
        }
    }

    return 0;
}