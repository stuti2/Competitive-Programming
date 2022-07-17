#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (int i = a; i < b; i++)
#define fp(i, a, b) for (long long int i = a; i >= b; i--)
#define vi(v) vector<int> v
#define TC(t) while (t--)
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void readFile()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    size_t found = a.find('1');
    if (n == 2 && a == "00" && b == "11")
    {
        cout << "NO" << endl;
    }
    
    else
    {
        bool hi = false;
        f(i, 1, n)
        {
            if (b[i] == b[i - 1])
            {
                hi = true;
                break;
            }
        }
        if (hi)
        {
            if (a == b)
                cout << "YES" << endl;

            else if (found == string::npos)
                cout << "NO" << endl;

            else
                cout << "YES" << endl;
        }
        else
        {
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int main()
{
    readFile();
    FASTIO;
    int t;
    cin >> t;
    TC(t)
    {
        solve();
    }
    return 0;
}