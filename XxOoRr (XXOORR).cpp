#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define vi(a,n)     vector<int> a(n)
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
    int n,k;
    cin>>n>>k;
    vi(a,n);
    f(i,0,n)
        cin>>a[i];
    vi(set_bits,32);
    f(bit,0,32)
    {
        for(auto x:a)
        {
            if(x&(1<<(bit)))
                set_bits[bit]++;
        }
    }
    int ans=0;
    for(auto x:set_bits)
        ans+=ceil(x/(float)k);
        
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
