#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for ( int i=a; i>=b; i--)
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
	int a[n];
	f(i,0,n)
	    cin>>a[i];
	sort(a,a+n);
	int count=1;
	int y=a[0];
	f(i,0,n){
	    if(a[i]==a[i+1])
	        count++;
	    else
	        break;
	}
	bool flag= true;
	f(i,count,n){
	    if(a[i]%(a[i]-y)!=y){
	        flag=false;
	        break;
	    }
	}
	if(flag)   
	    cout<<n-count<<endl;
	else
	    cout<<n<<endl;
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
