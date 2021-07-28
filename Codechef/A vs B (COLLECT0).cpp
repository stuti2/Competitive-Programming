#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int> 
#define vii vector<int,int>
#define pb push_back
#define f(i, a, b) for (ll i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define all(a) a.begin(), a.end()
#define TC(t) while (t--)
#define ll long long int

void solve()
{
    int a,b;
    cin>>a>>b;
    int p1,p2;
    p1=(a*100)/500;
    p2=(b*100)/500;
    if(p1>p2)
        cout<<"A"<<endl;
    else 
        cout<<"B"<<endl;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
