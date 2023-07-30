
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<long long> dp, dp2;
    long long N = 0, A = 0, B = 0, data = 0, idx = 0, idx2 = 0;
    long long value = 0;

    cin >> N >> A >> B;

    for (int i = 0; i < A; i++) {
        cin >> data;
        dp.push_back(data);
    }

    for (int i = 0; i < B; i++) {
        cin >> data;
        dp2.push_back(data);
    }

    sort(dp.begin(), dp.end());
    sort(dp2.begin(), dp2.end());

    idx = A - 1;
    idx2 = B - 1;

    while (N != 0) {
        if (N == 1 || idx2 < 0) {
            value += dp[idx];
            idx -= 1;
            N -= 1;
        }
        else if (idx >= 1 && dp2[idx2] < dp[idx] + dp[idx - 1] && (idx - 2 >= 0 || (N - 2) % 2 != 1)) {
            value += dp[idx] + dp[idx - 1];
            idx -= 2;
            N -= 2;
        }
        else {
            value += dp2[idx2];
            idx2 -= 1;
            N -= 2;
        }
    }

    cout << value << "\n";

    return 0;
}

