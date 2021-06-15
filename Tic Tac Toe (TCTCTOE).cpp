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
    char a[3][3];
    int x=0,o=0,space=0;
    f(i,0,3)
    {
        f(j,0,3)
        {
            cin>>a[i][j];
            if(a[i][j]=='X')
                x++;
            else if(a[i][j]=='O')
                o++;
            else
                space++;
        }
    }
    int x_win=0,o_win=0;
    f(i,0,3)
    {
        if(a[0][i]==a[1][i] && a[1][i]==a[2][i])
        {
            if(a[0][i]=='X')
                x_win++;
            else if(a[0][i]=='O')
                o_win++;
        }
    }
    f(i,0,3)
    {
        if(a[i][0]==a[i][1] && a[i][1]==a[i][2])
        {
            if(a[i][0]=='X')
                x_win++;
            else if(a[i][0]=='O')
                o_win++;
        }
    }
    if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
	        o_win++;
	    if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
	        o_win++;
	    if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
	        x_win++;
	    if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
	        x_win++;
	    
	   
	if(o>x) 
	    cout<<3<<endl; 
    else if(x-o>1) 
        cout<<3<<endl; 
    else if((x>o) && x_win==1 && o_win==0)
        cout<<1<<endl; 
    else if((x==o) && o_win==1 && x_win==0)
        cout<<1<<endl; 
    else if(space==0 && (x_win==0 && o_win==0)) 
        cout<<1<<endl; 
    else if(space==0 and x_win==2)
        cout<<1<<endl;
    else if(space>0 && (x_win==0 && o_win==0)) 
        cout<<2<<endl; 
    else 
        cout<<3<<endl;
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
