//AtCoder Problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector <int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  vector <int> ans;
  long long cf = 0;
  for(int ctr=1;ctr<=arr[n-1];ctr++){
    auto it = lower_bound(arr.begin(),arr.end(),ctr);
    int cnt = arr.end()-it;
    cf+=cnt;
    ans.push_back(cf%10);
    cf=cf/10;
  }
  while(cf>0){
    ans.push_back(cf%10);
    cf=cf/10;
  }
  for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i];
  }
}