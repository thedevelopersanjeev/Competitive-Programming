/****************************************************
*   Template for coding contests                    *
*   Author    :    Sanjeev Sharma                   *
*   Email     :    thedevelopersanjeev@gmail.com    *
*****************************************************/
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >>arr[i];
    vector<int> l(n+1), r(n+1);
    l[0] = r[n] = 0;
    for(int i = 1; i < n+1; i++)
        l[i] = __gcd(l[i-1], arr[i-1]);
    for(int i = n-1; i >= 0; i--)
        r[i] = __gcd(r[i+1], arr[i]);
    int ans = INT_MIN;
    for(int i = 0; i < n; i++)
        ans = max(ans, __gcd(l[i], r[i+1]));
    cout <<ans;
    return 0;
}
