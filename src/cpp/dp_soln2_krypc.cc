#include<bits/stdc++.h>
using namespace std;
 
const int N = 128;
const int K = 10100;
 
int n, k, a[N], f[N][K * 3], seq;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T-- > 0 && cin >> n >> k) {
        for (int i = 1; i <= n; ++i) cin >> a[i];
        f[0][K] = ++seq;
        int lo = K, hi = K;
        for (int i = 1; i <= n; ++i) {
            for (int j = lo; j <= hi; ++j) {
                if (f[i - 1][j] == seq) {
                    f[i][j + a[i]] = seq;
                    f[i][j - a[i]] = seq;
                    f[i][j + a[i] + i] = seq;
                    f[i][j + a[i] - i] = seq;
                }
            }
            lo += min(-a[i], a[i] - i);
            hi += a[i] + i;
        }
        cout << (f[n][K + k] == seq ? "YES\n" : "NO\n");
    }
}