#include <bits/stdc++.h>
using namespace std;

int main() {
    // pettrn
    int p;
    cin >> p;

    // パターン1
    if (p == 1) {

        // 値段
        int N;
        cin >> N;
        // 価格
        int price;
        cin >> price;

        cout << price * N << endl;
    }

    // パターン2
    if (p == 2) {
        // 説明
        string text;
        cin >> text;

        // 値段
        int N;
        cin >> N;
        // 価格
        int price;
        cin >> price;

        cout << text << "!" << endl;
        cout << price * N << endl;
    }
}
