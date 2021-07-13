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
    cin>>n;
    vector <ll> v;
    ll a[n];
    ll i,ad=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //ad+=a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[0]){ad++;}
    }
    //if(ad==0){cout<<"0"<<nn;}
    //else{
        cout<<n-ad<<nn;//}
    
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
