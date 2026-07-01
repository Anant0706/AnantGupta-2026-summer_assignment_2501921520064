#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> a(r, vector<int>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += a[i][j];
        cout << sum << endl;
    }

    return 0;
}