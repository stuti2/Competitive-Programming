#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll          long long

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n,count=0;
    cin>>n;
    string x,y;
    cin>>x;
    cin>>y;
    int a[n],b[n];
    f(i,0,n){
        a[i]=x[i]-'0';
        b[i]=y[i]-'0';
    }
    f(i,0,n){
        if(b[i]==0)
            continue;
        else if(a[i]==0){
            count++;
        }
        else if(i-1>=0 && a[i-1]==1){
            count++;
            a[i-1]=2;
        }
        else if(i+1<n && a[i+1]==1){
            count++;
            a[i+1]=2;
        }
    }
    cout<<count<<endl;
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
