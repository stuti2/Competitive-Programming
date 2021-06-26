#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while(t--)
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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    f(i,0,n)
        cin>>a[i];
    sort(a,a+n);
    TC(q)
    {
        ll x;
        cin>>x;
        ll pos=lower_bound(a,a+n,x)-a;
        if(a[pos]==x)
            cout<<0<<endl;
        else if(pos%2==0)
            cout<<"POSITIVE"<<endl;
        else
            cout<<"NEGATIVE"<<endl;
    }
}

int main() {
	// your code goes here
	readFile();
	FASTIO;
    solve();
	return 0;
}
