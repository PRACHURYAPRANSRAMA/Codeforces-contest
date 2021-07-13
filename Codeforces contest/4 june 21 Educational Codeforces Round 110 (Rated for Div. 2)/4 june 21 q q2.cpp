#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>
#include<numeric>

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
//#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie
ll GCD(ll n1,ll n2)
{
    while(n1 != n2)
        {
            if(n1 > n2)
                n1 -= n2;
            else
                n2 -= n1;
        }
    return n1;
}

//int gcd(int a, int b)
//{
//    // Everything divides 0
//    if (a == 0)
//       return b;
//    if (b == 0)
//       return a;
//    // base case
//    if (a == b)
//        return a;
//    // a is greater
//    if (a > b)
//        return gcd(a-b, b);
//    return gcd(a, b-a);
//}
//bool noPrime(long long int n)
//{
//    // Corner case
//    if (n <= 1)
//        return false;
//    
//    // Check from 2 to n-1
//    for (long long int i = 2; i <=sqrt(n); i++)
//        if (n % i == 0)
//            return true;
//    
//    return false;
//}
//
//bool isPrime(long long int n)
//{
//    // Corner case
//    if (n <= 1)
//        return false;
//    
//    // Check from 2 to n-1
//    for (long long int i = 2; i <=sqrt(n); i++)
//        if (n % i == 0)
//            return false;
//    
//    return true;
//}
//
//void solve()
//{
//    ll n;
//    cin>>n;
//    ll i;
//    vector<ll>p;
//    vector<ll> np;
//    ll a[n],ad=0,sum=0;
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    for(i=0;i<n;i++)
//    {
//        if(isPrime(a[i]))
//        {
//            p.push_back(a[i]);
//        }
//        if(noPrime(a[i]))
//        {
//            np.push_back(a[i]);
//        }
//        if(a[i]==1)
//        {
//            ad++;
//        }
//        
//    }
//    sort(p.begin(),p.end());
//    sort(np.begin(),np.end());
//    for(i=0;i<p.size();i++)
//    {
//        if(p[i]==2){sum++;}
//        
//    }
//    for(i=0;i<p.size()-1;i++)
//    {
//        if(p[i]==p[i+1]){sum++;}
//        
//    }
//    cout<<(p.size()*np.size())+sum+ad<<nn;
//    
//    
//}
//
//



    int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

    if(GCD(a[i],2*a[j])>1||GCD(a[j],2*a[i])>1)ans++;

    }}
    cout<<ans<<"\n";

    }
    }
//int main() {
//int n;
//cin >> n;
//vector<int> a(n);
//
//for(int i = 0; i < n; ++i)
//    cin >> a[i];
//
//int ans = a[0];
//for(int i = 1; i < n; ++i)
//   ans = gcd(ans, a[i]);
//
//cout << ans << endl;
//
//return 0;
//}
