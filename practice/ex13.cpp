#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 7;
    int N;
    cin >> N;

    int sum = 0;
    vector<int> K;

    for (int i = 0; i < N; i++) {

        int ten;
        cin >> ten;
        sum += ten;

        K.push_back(ten);
    }

    // 平均点を出力
    int avg = sum / N;

    //　平均点の乖離を確認
    for(int i = 0; i < K.size(); i++) {
        
        // abs
        cout << abs(avg - K.at(i))   << endl;
    }
}
