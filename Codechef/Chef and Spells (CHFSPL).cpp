#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
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
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a+b,a+c),b+c)<<endl;
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
