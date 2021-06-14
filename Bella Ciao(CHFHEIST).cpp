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
    int D,d,p,q;
    cin>>D>>d>>p>>q;
    ll n=D/d;
    ll money=(n*p*d) + (n-1)*n*q*d/2;
    if(D%d!=0)
    {
        ll rem_days=D%d;
        money+=(rem_days*(p+n*q));
    }
    cout<<money<<endl;
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
