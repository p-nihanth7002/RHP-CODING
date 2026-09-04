#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cnt(3 * n + 1, 0);
        for (int i = 0; i < n; i++) {
            int curr;
            cin >> curr;
            cnt[curr]++;
        }
        int ans = 0;
        for (int val = 1; val <= 2 * n; val++) {
            int curr = val;

            while (cnt[curr] > k) {
                cnt[curr + 1] += cnt[curr] - 1;
                cnt[curr] = 1;
                curr++;
            }
            ans = max(ans, curr - val);
        }
        cout << ans <<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
