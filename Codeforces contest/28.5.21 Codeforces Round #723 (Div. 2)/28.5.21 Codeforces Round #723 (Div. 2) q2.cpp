
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

ll  count(ll n)
{
    ll ad=0;
    while(n!=0)
    {
        ad++;
        n/=10;
    }
    return ad;
}

void solve()
{
    ll n,i,num=0;
    cin>>n;
    for(i=0;i<=count(n)-1;i++)
    {
        num+=pow(10,i);
    }
    //cout<<num<<nn;
    if(n>1099)
    {
        cout<<"YES"<<nn;
    }
    else{
        if(count(n)==1)
        {
            cout<<"NO"<<nn;
        }
   
   if(count(n)==2)
   {
       if(n%11==0)
       {
           cout<<"YES"<<nn;
       }
       else{
           cout<<"NO"<<nn;
       }
   }
   else{
       if((n%111)%11==0)
       {
           cout<<"YES"<<nn;
       }
       else{
           cout<<"NO"<<nn;
       }
   }
//   else{
//       if(n%11==1)
//       {cout<<"YES"<<nn;}
//       else{cout<<"NO"<<nn;}
//   }
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
    
}
