//
//  main.cpp
//  20 JUNE 2021
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 20/06/21.
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
    ll n;
    cin>>n;
    ll i,k=n,j;
    vector<ll> v;
    for(i=1;i<=n;i++)
    {
        //cout<<k<<" ";
        v.push_back(i);
        
    }
    //cout<<(n+1)/2;
    for(j=0;j<n-1;j++)
    {
       // if(v[i]==i+1)
        //{
            swap(v[j], v[j+1]);
       // }
        
    }
    for(j=0;j<n-1;j++)
    {
        if(v[j]==j+1)
        {
            swap(v[j+1], v[j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nn;
    
    
    
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
