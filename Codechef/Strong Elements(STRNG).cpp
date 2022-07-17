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

void solve(){
    int n,x,o,e;
    cin>>n;
    vector<int> v;
    f(i,0,n){
        cin>>x;
        v.push_back(x);
        if(x%2)
            o++;
        else
            e++;            
    }
    if(o==n-1 || e==n-1)
       cout<<0<<endl;
    else if(o<e)
       cout<<o<<endl;
    else
       cout<<e<<endl;
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