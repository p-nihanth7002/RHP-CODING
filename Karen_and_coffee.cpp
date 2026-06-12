#include <iostream>
using namespace std;      
int main() {
int diff[200005];       
int compare[200005]; 
int prefix[200005]; 
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff[l] = diff[l] + 1;
        diff[r + 1] = diff[r + 1] - 1;
    }
    int current_recipes = 0;
    for (int i = 1; i <= 200000; i++) {
        current_recipes = current_recipes + diff[i];
        if (current_recipes >= k) {
            compare[i] = 1;
        } else {
            compare[i] = 0;
        }
    }
    for (int i = 1; i <= 200000; i++) {
        prefix[i] = prefix[i - 1] + compare[i];
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << "\n";
    }

    return 0;
}