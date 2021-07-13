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
    
    ll n;
    n=4;
    ll a[4];
    ll i,ad=0,j;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    ll max=a[0],max2=0;
    for(i=0;i<4;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<4;i++)
    {
        if(max2<a[i]&&a[i]!=max)
        {
            max2=a[i];
        }
    }
    if((a[1]==max2&&a[0]==max)||(a[2]==max2&&a[3]==max)||(a[3]==max2&&a[2]==max)||(a[0]==max2&&a[1]==max))
    {
        cout<<"NO"<<nn;
    }
    else{
        cout<<"YES"<<nn;
    }
   //cout<<max<<" "<<max2<<nn;
    
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
