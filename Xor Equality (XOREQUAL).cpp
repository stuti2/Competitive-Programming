#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int> 
#define vii vector<int,int>
#define pb push_back
#define f(i, a, b) for (ll i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define all(a) a.begin(), a.end()
#define TC(t) while (t--)
#define ll long long int
#define mod 1000000007

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
    ll n;
    cin>>n;
	ll ans=power(2,n-1,mod);
	cout<<ans<<endl;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(0); 
    cin.tie(0);
    ll t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
