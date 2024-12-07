#include <bits/stdc++.h>
using namespace std;

int main() {
    // 配列
    vector<int> vec;

    vec = {1, 2, 3, 4, 5};

    cout << vec.at(1) << endl;
    cout << vec.size() << endl;

    // atを使って1つずつ入力
    cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

    // 和を出力
    cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;

    vector<int> data(3);    // vectorによる配列
    int data[3];            // Cの配列
    array<int, 3> data;     // arrayによる配列

    
    vector<int> vec(3, 10); // {10, 10, 10} で初期化
    vec = vector<int>(100, 2); // 100要素の配列 {2, 2, ... , 2, 2} で上書き
    cout << vec.at(99) << endl;
}