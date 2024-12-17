#include <bits/stdc++.h>
using namespace std;

int main() {

    // 多次元配列
    // vector < vector<int> data;
    // data = {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, { 1, 2, 3, 4 }

    // 縦３横４の多次元配列
    vector<vector<int>> data(3, vector<int>(4));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> data.at(i).at(j);
        }
    }

    // 0の個数を数える
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {

            // 上からi番目、左からj番目の画素が0かを判定
            if (data.at(i).at(j) == 0) {
                count++;
            }
        }
    }

    cout << count << endl;
}