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

void solve()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[n],b[n];
    f(i,0,n){
        cin>>a[i];
        sum1+=a[i];
    }
        
    f(i,0,n){
        cin>>b[i];
        sum2+=b[i];
    }
    int count=0;
    f(i,0,n){
        if(a[i]==b[i])
            count++;
    }
    
    vector<int> v;
    if(sum1!=sum2)
    {
        cout<<-1<<endl;
        return;
    }
    if(count==n)
    {
        cout<<0<<endl;
        return;
    }
    f(i,0,n){
        f(j,0,n){
            if(i==j)
                continue;
            else{
                if(a[i]>b[i])
                {
                    if(a[j]<b[j]){
                        while(a[j]<b[j] && a[i]>b[i])
                        {
                            a[i]-=1;
                            a[j]+=1;
                            v.push_back(i+1);
                            v.push_back(j+1);
                        }
                    }
                    else
                        continue;
                }
                else
                    break;
            }
        }
    }
    cout<<v.size()/2<<endl;
    
    for(int i=0;i<v.size();i+=2){
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
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
