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
#define PI acosl(-1)

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
	int a, b, c, d, e, k;
	cin >> a >> b >> c >> d >> e >> k;
	int mn = min({a, b, c, d, e});
	int mx = max({a, b, c, d, e});
	if (mx - mn > k)
	{
		// can not communicate
		cout << ":(";
	}
	else
	{
		// can communicate
		cout << "Yay!";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}