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
    int n;
    read(n);
    if (n > 1 and n <= 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    vi v(n + 1);
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i += 2)
        v[i] = (mid++);
    mid = 1;
    for (int i = 2; i <= n; i += 2)
        v[i] = (mid++);

    for (int i = 1; i <= n; i++)
        write(v[i]);
}

int32_t main()
{
    fastIO();
    //   w(t)
    solve();

    return 0;
}

// Template designed by Saikat