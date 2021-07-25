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
    double a,b,x;
    cin>>a>>b;
    ll ans;
    if(a==b) {
        cout<<0<<endl;
        return;
    }
    else if(a>b){
        x=a-1;
    }
    else {
        x=a+1;
    }
    ans=(ceil((b-x)/2) + ceil((x-a)/2));
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
