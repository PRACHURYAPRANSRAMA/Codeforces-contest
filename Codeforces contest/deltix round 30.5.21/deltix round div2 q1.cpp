#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>

using namespace std;

#define pb     push_back
#define nn     endl
#define pll    pair<int,int>
#define ll     long long int
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie



void solve()
{
    ll m,n,i,ad=0,j,sum=0;
    cin>>m>>n;
    string s;
    cin>>s;
    
    //for(j=0;j<n;j++)
    //{
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='1'&&s[i+1]!='1')
                {
                    s[i]='1';
                }
                if(s[i-1]!='1'&&s[i+1]=='1')
                {
                    s[i]='1';
                }
                if(i==0&&s[i+1]=='1')
                { s[i]='1';}
                if(i==s.size()-1&&s[i-1]=='1')
                { s[i]='1';}
            }
            
        }
    for(i=0;i<n;i++)
    {
        if(s[]=='0')
        {
            if(s[i-1]=='1'&&s[i+1]!='1')
            {
                s[i]='1';
            }
            if(s[i-1]!='1'&&s[i+1]=='1')
            {
                s[i]='1';
            }
            if(i==0&&s[i+1]=='1')
            { s[i]='1';}
            if(i==s.size()-1&&s[i-1]=='1')
            { s[i]='1';}
        }
        n--;
    }
    //}
    
    
//    for(i=0;i<n;i++)
//    {
//        if(s[i]=='1')
//        {
//            if(s[i-1]=='0')
//            {
//                s[i-1]='1';
//            }
//            if(s[i+1]=='0')
//            {
//                s[i+1]='1';
//            }
//        }
//    }
//    ll k=m-1;
//    for(i=0;i<=n;i++)
//    {
//        if(s[k]=='1')
//        {
//            if(s[k-1]=='0')
//            {
//                s[k-1]='1';
//            }
//            if(s[k+1]=='0')
//            {
//                s[k+1]='1';
//            }
//        }
//        k--;
//    }
    cout<<s<<nn;
    
    
    
}




int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}
