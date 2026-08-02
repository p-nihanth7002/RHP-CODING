// AtCoder Question
#include <iostream>
using namespace std;
int  main(){
  int m,n;
  cin>>m>>n;
  int arr[m+2]={0};
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    arr[a]+=1;
    arr[b+1]-=1;
  }
  int minval = 200005;
  for(int i=1;i<=m;i++){
    arr[i]+=arr[i-1];
    minval=min(arr[i],minval);
  }
  cout<<minval;
}