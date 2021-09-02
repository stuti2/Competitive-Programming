#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)                  for (int i=a; i<b; i++)
#define fp(i, a, b)                 for (long long int i=a; i>=b; i--)
#define TC(t)                       while (t--)
#define input(arr1,n1)              f(i,0,n1) {cin>>arr1[i];}
#define FASTIO                      ios_base::sync_with_stdio(false); cin.tie(NULL)

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n,k,l;
    cin>>n>>k>>l;
    int a[n];
    input(a,n);
    int mx=*max_element(a,a+n),speed=0;
    speed=a[n-1] + (k*(l-1));
    if(a[n-1]==mx)
        cout<<"Yes"<<endl;
    else if(speed>mx)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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