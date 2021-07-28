#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int> 
#define vii vector<int,int>
#define pb push_back
#define f(i, a, b) for (long long int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define all(a) a.begin(), a.end()
#define TC(t) while (t--)
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    ll a=1,b=2,c;
    
    f(i,0,n-2)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n==1)
        cout<<a<<endl;
    else if(n==2)
        cout<<b<<endl;
    else
        cout<<c<<endl;
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
