#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int mark=0;
        for(char c:s)
        {
            if(c=='?')
                mark++;
        }
        int n=s.size();
        if(s[0]==')')
            cout<<"No"<<endl;
        else if(s[n-1]=='(')
            cout<<"No"<<endl;
        else if(mark%2!=0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
