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
    int total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
        return;
    }
    else
    {
        set<int> first, second;
        int skip = 0;
        if (n % 4)
            skip = 3;
        else
            skip = 4;
        fo(i, 0, (n - 1) / 4)
        {
            first.insert(4 * i + 1 + skip);
            first.insert(4 * i + 4 + skip);
            second.insert(4 * i + 2 + skip);
            second.insert(4 * i + 3 + skip);
        }
        if (n % 4)
        {
            first.insert(1);
            first.insert(2);
            second.insert(3);
        }
        else
        {
            first.insert(1);
            first.insert(4);
            second.insert(2);
            second.insert(3);
        }

        cout << "YES\n"
             << first.size() << "\n";
        for (auto i : first)
            write(i);
        cout << "\n"
             << second.size() << "\n";
        for (auto i : second)
            write(i);
    }
}

int32_t main()
{
    fastIO();
    //   w(t)
    solve();

    return 0;
}

// Template designed by Saikat