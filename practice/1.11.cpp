#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int init;
    cin >> init;

    int sum = 0;

    for (int i = 0; i < N; i++) {

        string str;
        cin >> str;

        int B;
        cin >> B;

        if (i == 0) {

            if (str == "+") {
                sum = init + B;
                cout << i + 1 << ":" << sum << endl;

            } else if (str == "-") {
                sum = init - B;
                cout << i + 1 << ":" << sum << endl;

            } else if (str == "*") {
                sum = init * B;
                cout << i + 1 << ":" << sum << endl;

            } else if (str == "/") {
                sum = init / B;
                cout << i + 1 << ":" << sum << endl;

            } else if (str == "/" && B == 0) {

                cout << "error" << endl;
                break;

            } else if ((str == "+" || str == "-" || str == "*" || str == "/")) {
                cout << "error" << endl;
                break;
            }

        } else if (str == "+") {
            sum = sum + B;
            cout << i + 1 << ":" << sum << endl;

        } else if (str == "-") {
            sum = sum - B;
            cout << i + 1 << ":" << sum << endl;

        } else if (str == "*") {
            sum = sum * B;
            cout << i + 1 << ":" << sum << endl;

        } else if (str == "/" && !(B == 0)) {
            sum = sum / B;
            cout << i + 1 << ":" << sum << endl;

        } else if (str == "/" && B == 0) {

            cout << "error" << endl;
            break;

        } else if ((str == "+" || str == "-" || str == "*" || str == "/")) {
            cout << "error" << endl;
            break;
        }
    }
}
