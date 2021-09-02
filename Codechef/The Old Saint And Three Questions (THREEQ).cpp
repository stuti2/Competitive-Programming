#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)                  for (int i=a; i<b; i++)
#define fp(i, a, b)                 for (long long int i=a; i>=b; i--)
#define input(arr1,n1)              f(i,0,n1) {cin>>arr1[i];}
#define TC(t)                       while (t--)
#define FASTIO                      ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() 
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int a[3],b[3],c1_1=0,c2_1=0;
    input(a,3);
    input(b,3);
    
    f(i,0,3){
        if(a[i]==1)
            c1_1++;
        if(b[i]==1)
            c2_1++;
    }
    if(c1_1==c2_1)
        cout<<"Pass"<<endl;
    else
        cout<<"Fail"<<endl;
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