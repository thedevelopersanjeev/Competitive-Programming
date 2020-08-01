#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("trapv")
#pragma GCC target("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define deb(x) cout << #x << " is " << x << "\n"
#define int long long
#define mod 1000000007LL
#define PI 2 * acos(0)

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool powerOfTwo(int n)
{
    if (n == 1)
        return true;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n /= 2;
    }
    return 1;
}

void solve()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = (n * (n + 1)) / 2;
        int extra = 1;
        while (extra <= n)
        {
            ans -= (2LL * extra);
            extra <<= 1LL;
        }
        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}
