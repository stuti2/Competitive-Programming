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
    string s;
    cin>>s;
    int count1 = 0,count2 = 0;
    int b[26];
    f(i,0,26)
        b[i] = 0;

    f(i,0,s.length())
        b[s[i]-'a']++;    
        
    f(i,0,26){
        if(b[i]>1) 
            count1++;
        
        else if(b[i]==1)
            count2++;
    }
    int ans = count1 + (count2/2);
    cout<<ans<<endl;
}

int main() {
	readFile();
	FASTIO;
  int t;
  cin>>t;
  TC(t) {
      solve();
  }
	return 0;
}
