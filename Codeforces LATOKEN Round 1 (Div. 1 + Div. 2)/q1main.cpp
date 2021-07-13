//
//  main.cpp
//  Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 13/06/21.
//

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
  float n,i,ad=0,sum=0,k,m;
    cin>>n;
   // ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
    }
    if(sum==n)
    {
        cout<<"0"<<nn;
    }
    else if(sum>n)
    {
        cout<<sum-n<<nn;
    }
    else{
        cout<<"1"<<nn;
    }
//    k=sum/n;
//    while(k!=1)
//    {
//        sum++;n++;ad++;
//    }
//    if(k==1)
//    {
//        cout<<"0"<<nn;
//    }
//    else{
//        cout<<ad<<nn;
//    }
//
    //cout<<ad<<nn;
    
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
