#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <map>
using namespace std;
int main() {
    int R;
    cin >> R;
    map<int, vector<pair<int,int>>> g;
    set<int> vis;
    while (R--) {
        int c1, c2, dis;
        cin >> c1 >> c2 >> dis;
        g[c1].push_back({c2, dis});
        g[c2].push_back({c1, dis});
    }
    int st, lt;
    cin >> st >> lt;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, st});
    while (!pq.empty()) {
        auto [currdist, city] = pq.top();
        pq.pop();
        if (vis.count(city)) continue;
        vis.insert(city);
        if (city == lt) {
            cout << currdist;
            return 0;
        }
        for (auto [nc, nd] : g[city]) {
            if (!vis.count(nc)) {
                pq.push({currdist + nd, nc});
            }
        }
    }
    cout << -1;
}
