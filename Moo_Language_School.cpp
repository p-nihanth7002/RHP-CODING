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
using LL = long long;
using namespace std;
 
int gcd(int a, int b){
return b==0?a:gcd(b,a%b);
}
void solve() {
int t;cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int F = n/k;
    vector<bool> own(F, false);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            int farmidx = i / k;
            own[farmidx] = true;
        }
    }
    int cnt = 0;
    for (int f = 0; f < F; f++) {
        if (!own[f]) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}