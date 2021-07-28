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
    int n;
    cin>>n;
    int a[2*n],even=0;
    f(i,0,2*n)
    {
        cin>>a[i];
        if(a[i]%2)
            even++;
    }
    if(2*n - even == even)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main() 
{
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
