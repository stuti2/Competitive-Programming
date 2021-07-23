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
    int n;
    cin>>n;
    int c1,c2;
    if(n==1){
        c1=1;
        c2=0;
    }
    else if(n==2){
        c1=0;
        c2=1;
    }
    else {
        if(!(n%3)) {
            c1=n/3;
            c2=n/3;
        }
        else {
            if(n%3) {
                c1=(n/3)+1;
                c2=(n/3);
            }
            else {
                c1=(n/3);
                c2=(n/3)+1;
            }
        }
    }   
    cout<<c1<<" "<<c2<<endl;
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
