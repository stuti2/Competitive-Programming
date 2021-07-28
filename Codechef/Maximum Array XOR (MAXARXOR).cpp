#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (ll i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll          long long

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll swaps = pow(2,n-1);
    ll ele= (pow(2,n)-1);
    if(k>swaps)
        cout<<2*ele*swaps<<endl;
    else 
        cout<<2*ele*k<<endl;
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
