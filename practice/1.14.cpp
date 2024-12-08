#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> toll = {A,B,C};
  // sort 
  sort(toll.begin(),toll.end());

  // 身長差を求める
  cout << toll.at(2) -  toll.at(0) << endl;
}
