#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<long long>
#define eb(x) emplace_back(x)
#define setbits(x) __builtin_popcountll(x)
#define tz(x) __builtin_ctzll(x)
#define lz(x) __builtin_clzll(x)
#define fsetbit(x) ffsll(x)
#define mod 1000000007
#define inf 1e18
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, k, n) for (int i = k; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define debug(x, val) cout << "The value of " << x << " is: " << val << "\n";
#define op(x) cout << x << "\n";
#define all(x) x.begin(), x.end()

template <typename... T>
void read(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void write(T &&...args)
{
    ((cout << args << " "), ...);
}

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int x, y, ans;
    read(x, y);
    int maxed = max(x, y), square = (maxed - 1) * (maxed - 1);
    if (maxed & 1)
    {
        if (maxed == x)
            ans = square + y;
        else
            ans = square + 2 * maxed - x;
    }
    else
    {
        if (maxed == y)
            ans = square + x;
        else
            ans = square + 2 * maxed - y;
    }
    write(ans);
}

int32_t main()
{
    fastIO();
    w(t)
        solve();

    return 0;
}

// Template designed by Saikat