#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
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
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll>m;
    f(i,0,n){
        cin>>a[i];
        m[a[i]]++;
    }
    ll ans=n*(n-1);
    for(auto x:m){
        if(x.second>1)
        ans-=(x.second*(x.second-1));
    }
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
