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
	int a[n],max=INT_MIN;
	f(i,0,n){
	    cin>>a[i];
	    if(a[i]>max)
	        max=a[i];
	}
	int bor=a[0]^max;
	f(i,1,n){
	    bor|=(a[i]^max);
	}
	    
	cout<<max<<" "<<bor<<endl;
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
