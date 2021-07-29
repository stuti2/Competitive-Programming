#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int x,y,ans;
    cin>>x>>y;
    if(x%2==0 && y%2==0)
        ans=0;
    else if(__gcd(x,y)!=1)
        ans=0;
    else if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1)
        ans=1;
    else
        ans=2;
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
