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
    int n;
    cin>>n;
    int rem=int(n/7)*7;
    int diff=int(n-rem);
    if(diff==1)
        cout<<"Monday"<<endl;
    else if(diff==2)
        cout<<"Tuesday"<<endl;
    else if(diff==3)
        cout<<"Wednesday"<<endl;
    else if(diff==4)
        cout<<"Thursday"<<endl;
    else if(diff==5)
        cout<<"Friday"<<endl;
    else if(diff==6)
        cout<<"Saturday"<<endl;
    else
        cout<<"Sunday"<<endl;
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
