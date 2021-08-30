#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)                for (int i=a; i<b; i++)
#define fp(i, a, b)               for (long long int i=a; i>=b; i--)
#define TC(t)                     while (t--)
#define input(arr1,n1)            f(i,0,n1) {cin>>arr1[i];}
#define FASTIO                    ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

bool isvowel(int c) 
{ 
        return strchr("aeiou", tolower(c)) != NULL;
}

void solve(int t){
    string s;
    cin>>s;
    int max_vow=0,max_con=0,count[256]={0},vow=0,con=0;
    f(i,0,s.length()){
        count[s[i]]++;
        if(isvowel(s[i]))
            vow++;
        else
            con++;
    }

    f(i,0,s.length()){
        if(isvowel(s[i]) && count[s[i]]>max_vow){
            max_vow=count[s[i]];
        }
        else if(!isvowel(s[i]) && count[s[i]]>max_con){
            max_con=count[s[i]];
        }
    }

    int ans1=0,ans2=0;
    ans1 = (vow-max_vow)*2 + con;    
    ans2 = (con-max_con)*2 + vow;
    
    cout<<"Case #"<<t<<": "<<min(ans1,ans2)<<endl;
}

int main() {
    readFile();
    FASTIO;
    int t;
    cin>>t;
    f(i,1,t+1){
        solve(i);
    }
    return 0;
}