
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
 
void solve() {
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int> a(n);
    int ocnt=0,eoddq=0,eevenq=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1)ocnt++;
        else if((a[i]/2)%2==0) eevenq++;
        else eoddq++;
    }
    cout<<max({ocnt,eevenq,eoddq})<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
