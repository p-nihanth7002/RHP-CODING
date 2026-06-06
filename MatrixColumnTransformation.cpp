#include <iostream>
#include <climits>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int rows = 0; rows < r; rows++) {
        for (int col = 0; col < c; col++) {
            cin >> arr[rows][col];
        }
    }
    int dp[r][c];
    for (int rows = 0; rows < r; rows++) {
        dp[rows][0] = arr[rows][0];
    }
    for (int col = 1; col < c; col++) {
        int fmax = dp[0][col-1];
        int k = 0;
        for (int rows = 1; rows < r; rows++) {
            if (fmax < dp[rows][col-1]) {
                fmax = dp[rows][col-1];
                k = rows;
            }
        }
        int smax = INT_MIN;
        for (int rows = 0; rows < r; rows++) {
            if (rows != k && dp[rows][col-1] > smax) {
                smax = dp[rows][col-1];
            }
        }
        for (int rows = 0; rows < r; rows++) {
            if (k == rows) {
                dp[rows][col] = arr[rows][col] + smax;
            } else {
                dp[rows][col] = arr[rows][col] + fmax;
            }
        }
    }
    int tmax = dp[0][c-1];
    for (int rows = 0; rows < r; rows++) {
        if (tmax < dp[rows][c-1]) {
            tmax = dp[rows][c-1];
        }
    }
    cout << tmax << endl;
    return 0;
}
