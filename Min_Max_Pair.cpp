//Atcoder Problem
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n+1];
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  int sc=0,ec=0;
  for(int i=1;i<=n;i++){
    if(i==arr[i]){
      sc++;
    }
    else if(arr[i]!=i && i==arr[arr[i]]){
      ec++;
    }
  }
  cout<<(ec/2+2LL*sc*(sc-1)/2);
}