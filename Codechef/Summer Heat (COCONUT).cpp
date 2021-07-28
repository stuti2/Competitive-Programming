#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (ll i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define all(a)      a.begin(), a.end()
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    int xa,xb,Xa,Xb;
    cin>>xa>>xb>>Xa>>Xb;
    cout<<(Xa/xa)+(Xb/xb)<<endl;
}

int main() {
	// your code goes here
	readFile();
	FASTIO;
    int t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
