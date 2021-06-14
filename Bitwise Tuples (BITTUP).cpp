#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)      for (ll i=a; i<b; i++)
#define fp(i, a, b)     for (long long int i=a; i>=b; i--)
#define TC(t)           while (t--)
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll              long long

const long long mod=1000000007;

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

int power(ll x,ll y,ll p)
{
    int res = 1;    
    x = x % p;
    if (x == 0) 
        return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    ll ans=1;
    ans=power(2,n,mod)-1;
    ans=power(ans,m,mod);
    cout<<ans<<endl;
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
