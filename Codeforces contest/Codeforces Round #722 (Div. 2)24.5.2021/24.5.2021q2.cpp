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

ll largest(ll arr[], ll n)
{
    ll i;
     
    // Initialize maximum element
    ll max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

//void solve()
//{
//    ll n;
//    cin>>n;
//    vector <ll> v;
//    ll a[n];
//    ll i,ad=0,sum=0;
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//       }
//    //sort(a,a+n);
//    for(i=0;i<n-1;i++)
//    {
//        if(a[i+1]-a[i]>=largest(a,n))
//        {//v.push_back(a[i+1]);
//           v.push_back(a[i]);
//            //sum++;
//        }
//    }
//    //cout<<largest(a,n)<<"hi"<<nn;
////    for(i=0;i<n;i++)
////    {
////        cout<<v[i]<<nn;
////    }
//   cout<<v.size()<<nn;
//    cout<<nn;
//    //cout<<sum<<n;
//
//}








void solve()
{
    ll i,j,n;
    cin>>n;
    ll a[n];
    vector<ll> v;
    vector<ll> p;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {v.push_back(a[i]-a[j]);}
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nn;
    sort(v.begin(),v.end());
    ll ad=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=v[0]){ad++;}
    }
    cout<<ad<<nn;
    
    
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
