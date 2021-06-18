#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " is " << x << "\n"
#define int long long
#define mod 1000000007
#define PI acos(-1)

template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

template <typename T>
using max_heap = priority_queue<T>;

template <typename... T>
void read(T &... args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T &&... args) {
    ((cout << args), ...);
}

template <typename T>
void readContainer(T &t) {
    for (auto &e : t) read(e);
}

template <typename T>
void writeContainer(T &t) {
    for (const auto &e : t) write(e, " ");
    write("\n");
}

void solve(int tc) {
    // n m
    // a1 + a2 + a3 + ... + an = m
    // d.k1 + d.k2 + d.k3 + ... + d.kn = m
    // find maximum d ???
    // d | n
    // d * n <= m
    int n, m;
    read(n, m);
    int ans = 1;
    for (int d = 1; d * d <= m; d++) {
        if (m % d == 0) {
            int dd = m / d;
            if ((d * n) <= m) {
                ans = max(ans, d);
            }
            if ((dd * n) <= m) {
                ans = max(ans, dd);
            }
        }
    }
    write(ans);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int tc = 1;
    // read(tc);
    for (int curr = 1; curr <= tc; curr++) solve(curr);
    return 0;
}