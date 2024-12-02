#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int x = 0;
    int y = 0;
    string i, j;

    // ここにプログラムを追記
    while (x < A) {
        i += "]";
        x++;
    }

    while (y < B) {
        j += "]";
        y++;
    }

    cout << "A:" << i << endl;
    cout << "B:" << j << endl;
}
