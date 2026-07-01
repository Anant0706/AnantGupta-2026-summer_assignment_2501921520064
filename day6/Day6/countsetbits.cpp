#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
         n = n & (n - 1); 
        count++;
    }
    return count;
}

int main() {
    int num;
    cout <<"enter the no.";
    cin>>num;
    cout << "Set bits in " << num << " is: " << countSetBits(num) << endl;
    return 0;
}