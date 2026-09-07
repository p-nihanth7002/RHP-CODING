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
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<gcd(arr[0],arr[n-1])<<endl;
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
