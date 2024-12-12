#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);

    // 入力を受け取る
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // 隣り合う要素の比較
    for (int i = 1; i < data.size(); i++) {
        if (data.at(i - 1) == data.at(i)) {
            cout << "YES" << endl;
            return 0; // 隣接する等しい要素が見つかった場合は終了
        }
    }

    // ループが終了した場合、等しい要素は存在しない
    cout << "NO" << endl;
    return 0;
}
