#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;

    for (char ch : s)
        freq[ch]++;

    char ans;
    int maxi = 0;

    for (char ch : s) {
        if (freq[ch] > maxi) {
            maxi = freq[ch];
            ans = ch;
        }
    }

    cout << ans;

    return 0;
}