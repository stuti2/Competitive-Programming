#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define vi(v)       vector<int>v
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
    string s;
    cin>>s;
    vector<char>v1,v2;
    
    f(i,0,n){
        if(i&1)
            v1.push_back(s[i]);
        else
            v2.push_back(s[i]);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    if(v1==v2)
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