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
//#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie

ll gcd(ll a , ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
bool isPrime(long long int n)
{
    // Corner case
    if (n <= 1)
        return false;
    
    // Check from 2 to n-1
    for (long long int i = 2; i <=sqrt(n); i++)
        if (n % i == 0)
            return false;
    
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    if(n==100){
        cout<<"1"<<nn;
        return;
    }
    else{
        cout<<100/gcd(100,n)<<nn; return;
//        if(100%n==0)
//        {cout<<100/n<<nn;return;}
//        //if(isPrime(n)&&n!=5&&n!=2){cout<<"100"<<nn;return;}
//        else{cout<<(n/100)*100+(100-((n/100)*100))<<nn;return;}
        
    }
   
    
}




int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    //cout<<gcd(100,6);
}
