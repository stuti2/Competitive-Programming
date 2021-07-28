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

int countFreq(int arr[], int n) 
{ 
    vector<bool> visited(n, false); 
    int min=INT_MIN;
    f(i,0,n) 
    { 
        if (visited[i] == true) 
            continue; 
        int counter=1; 
        f(j,i + 1,n) 
        { 
            if (arr[i] == arr[j]) 
            { 
                visited[j] = true; 
                counter++; 
            } 
        } 
        if(counter>min)
            min=counter;
    } 
    return min;
}
void solve()
{
    int n;
    cin>>n;
    int a[n],count;
    f(i,0,n)
        cin>>a[i];
    count=countFreq(a,n);
    cout<<count<<endl;
}

int main() 
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin>>t;
    TC(t)
    {
        solve();
    }
}
