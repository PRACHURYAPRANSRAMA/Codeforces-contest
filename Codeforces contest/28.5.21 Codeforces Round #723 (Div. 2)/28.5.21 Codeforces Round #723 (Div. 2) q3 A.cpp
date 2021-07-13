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


int main()

{
    ll n,ad=0,sum=0,m=0,l=0;
    cin>>n;
    vector<ll> v;
    vector<ll> b;
    ll i;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll pps=0;
    for(i=0;i<n;i++)
    {
        pps+=a[i];
        if(pps>=0){l++;}
        else{pps=0;}
    }
   // sort(a,a+n);
//    for(i=0;i<n;i++)
//    {
//        if(a[i]>=0)
//        {sum+=a[i]; b.push_back(a[i]);ad++; break;}
//
//    }
//    for(i=0;i<n;i++)
//    {
//
//        if(a[i]>=0){sum+=a[i];ad++;}
//        if(a[i]<0){v.push_back(a[i]);}
//    }
//    sort(v.begin(), v.end(), greater <>());
////    cout<<sum<<nn;
////    cout<<ad<<nn;
////    for(i=0;i<v.size();i++)
////    {
////        cout<<v[i]<<" ";
////    }
////   cout<<nn;
//    ll j=sum-b[0];
//    for(i=0;i<v.size();i++)
//    {
//        //if(sum>=0){m++;}
//        //if(a[i]<0&&sum>0){sum+=v[i];m++;}
//        j+=v[i];
//        if(j>=0){m++;}
//    }
//    //cout<<m<<nn;
//    //cout<<sum<<nn;
//    cout<<(ad+m)-1<<nn;
    cout<<l<<nn;
}
