//
//  main.cpp
//  Codeforces Round #729 (Div. 2)Jul/03/2021 18:35UTC+5.5
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 03/07/21.
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
    ll n,ad=0,ok=0;
    cin>>n;
    ll a[2*n],i;
    for(i=0;i<2*n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            ok++;
        }
    }
    ll k=2*n-1;
    for(i=0;i<k;i+=2)
    {
        if((a[i]+a[i+1])%2==0){

            ad++;
        }
    }
    if(ad==0)
    {
        cout<<"Yes"<<nn;
    }
    else{
        if(ok==(2*n-ok))
        cout<<"Yes"<<nn;
        else{
            cout<<"No"<<nn;
        }
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
