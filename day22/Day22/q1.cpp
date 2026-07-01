#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, temp;
    cin >> s;

    temp = s;
    reverse(temp.begin(), temp.end());

    if (s == temp)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}