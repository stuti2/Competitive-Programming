#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int> 
#define vii vector<int,int>
#define pb push_back
#define f(i, a, b) for (ll i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define all(a) a.begin(), a.end()
#define TC(t) while (t--)
#define ll long long int

void solve()
{
    string str;
    string temp;
    cin>>str;
    sort(str.begin(), str.end());
    int sum=0;
    for(int i = 0; i < str.length(); ++i)
    {
        sum+=str[i]-'a'+1;
    }
    if(sum%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0); 
    cin.tie(0);
    ll t;
    cin>>t;
    TC(t)
    {
        solve();
    }
	return 0;
}
