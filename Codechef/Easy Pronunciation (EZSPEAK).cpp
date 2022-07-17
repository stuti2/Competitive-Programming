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
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    f(i,0,s.length()){
        if(cnt>=4)
            break;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            cnt=0;
        else
            cnt++;
    }
    if(cnt>=4)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
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