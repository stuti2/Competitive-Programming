#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll          long long

void readFile() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    int n,k=0;
    cin>>n;
    string s,sorted_s;
    cin>>s;
    sorted_s = s;
    sort(sorted_s.begin(),sorted_s.end());
    f(i,0,n){
        if(s[i]!=sorted_s[i])
            k++;
    }
    cout<<k<<endl;
}

int main() {
	// your code goes here
	readFile();
	FASTIO;
    int t;
    cin>>t;
    TC(t) {
        solve();
    }
	return 0;
}
