#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;

    for (char ch : s) {
        if (st.count(ch)) {
            cout << ch;
            return 0;
        }
        st.insert(ch);
    }

    cout << "No repeating character";

    return 0;
}