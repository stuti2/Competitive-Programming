#include <bits/stdc++.h>
using namespace std;
#define vi(a,n)     vector<int> a(n)
#define f(i, a, b)  for (ll i=a; i<b; i++)
#define fp(i, a, b) for (ll int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(a,n)    a,a+n+1
#define ll          long long
const int N=1e6;
ll Prefix[N];
ll Suffix[N];
void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void MaxGCD(ll a[], ll n)
{
    Prefix[1] = a[0];
    f(i,2,n+1) 
        Prefix[i] = __gcd(Prefix[i-1], a[i-1]);
    
    Suffix[n] = a[n-1];
    fp(i,n-1,1) 
        Suffix[i] = __gcd(Suffix[i+1], a[i-1]);
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    f(i,0,n)
        cin>>a[i];
    sort(all(a,n));
    MaxGCD(a,n);
    //cout<<mxGcd<<" ";
    ll sum=0;
    f(i,0,n)
        sum+=a[i];
    ll notes=LLONG_MAX,mn=0;
    f(i,1,n+1)
    {
        mn=(sum-a[i-1] +  __gcd(Prefix[i-1], Suffix[i+1]))/ __gcd(Prefix[i-1], Suffix[i+1]);
        if(mn<notes)
            notes=mn;
    }
    cout<<notes<<endl;
}

int main() {
	// your code goes here
	readFile();
	FASTIO;
    ll t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
