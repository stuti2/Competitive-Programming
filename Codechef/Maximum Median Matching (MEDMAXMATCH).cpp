#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define vi(v,x)       vector<int>v,x
#define pb     push_back
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
    vi(v1,v2);
    f(i,0,n){
        int x;
        cin>>x;
        v1.pb(x);
    }
    f(i,0,n){
        int x;
        cin>>x;
        v2.pb(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    f(i,0,n/2){
        v1[i]+= v2[i];
    }
    int j=n-1;
    f(i,n/2,n){
        v1[i]+=v2[j--];
    }
    sort(v1.begin(),v1.end());
    cout<<v1[n/2]<<endl;
}

int main() {
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