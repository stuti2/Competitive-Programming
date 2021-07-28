#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int> 
#define vii vector<int,int>
#define pb push_back
#define f(i, a, b) for (long long int i=a; i<=b; i++)
#define fp(i, a, b, k) for (long long int i=a; i<=b; i+=k)
#define all(a) a.begin(), a.end()
#define TC(t) while (t--)
#define ll long long int

void solve()
{
    ll n,M;
    cin>>n>>M;
	ll counter=0;
	ll a[n+1];
	fill(a,a+n+1,1);
	f(i,2,n)
	{
	    counter+=a[M%i];
	    fp(j,M%i,n,i)
	    {
	        a[j]++;
	    }
	}
	cout<<counter<<endl;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0); 
    cin.tie(0);
    ll t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
