#include <iostream>
#include <climits>
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int rows=0;rows<r;rows++){
        for(int col=0;col<c;col++){
            cin>>arr[rows][col];
        }
    }
    int dp[r][c];
    for(int col=0;col<c;col++){
        dp[0][col]=arr[0][col];
    }
    for(int rows=1;rows<r;rows++){
        int fmax=dp[rows-1][0];
        int k=0;
        for(int col=1;col<c;col++){
            if(fmax<dp[rows-1][col]){
                fmax=dp[rows-1][col];
                    k=col;
            }
        }
        int smax = INT_MIN;
        bool found = false;
        for(int col=0;col<c;col++){
            if(col!=k && dp[rows-1][col]>smax){
                smax=dp[rows-1][col];
                found = true;
            }
        }
        if(!found){
            smax=fmax;
        }
        for(int col=0;col<c;col++){
            if(k==col){
                dp[rows][col]=arr[rows][col]+smax;
            }
            else{
                dp[rows][col]=arr[rows][col]+fmax;
            }
        }
    }
    int tmax=dp[r-1][0];
    for(int col=0;col<c;col++){
        if(tmax<dp[r-1][col]){
            tmax=dp[r-1][col];
        }
    }
    cout<<tmax<<endl;
}