#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2) {
        cout << "Multiplication not possible";
        return 0;
    }

    vector<vector<int>> a(r1, vector<int>(c1));
    vector<vector<int>> b(r2, vector<int>(c2));
    vector<vector<int>> c(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}