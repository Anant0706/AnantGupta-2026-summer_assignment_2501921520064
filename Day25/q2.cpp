#include <iostream>
#include <set>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    set<char> st(s2.begin(), s2.end());
    set<char> ans;

    for (char ch : s1) {
        if (st.count(ch))
            ans.insert(ch);
    }

    for (char ch : ans)
        cout << ch << " ";

    return 0;
}