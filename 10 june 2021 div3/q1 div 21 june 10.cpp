//
//  main.cpp
//  10 june 2021 div3
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 10/06/21.
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
ll max(ll a[],ll n)
{
    ll i,max=a[0];
   
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
    return max;
}

ll min(ll a[],ll n)
{
    ll i,min=a[0];
   
        for(i=0;i<n;i++)
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }
    return min;
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> v;
    vector<ll> b;    ll i,ad,sum;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
//        if(max(a,n)==a[i]){v.push_back(i+1);}
//        if(min(a,n)==a[i]){b.push_back(i+1);}
//
    }
    
    for(i=0;i<n;i++)
    {
        
        if(max(a,n)==a[i]){v.push_back(i+1);}
        if(min(a,n)==a[i]){b.push_back(i+1);}
        
    }
    ad=v[v.size()-1]-1;
    sum=n-v[v.size()-1];
    ll f,g;
    f=b[b.size()-1]-1;
    g=n-b[b.size()-1];
    ll rl1,right,left,rl2;
    left=(max(v[v.size()-1],b[b.size()-1]));
    right=(min(v[v.size()-1],b[b.size()-1])+1);
    rl1=sum+1+f+1;
    rl2=g+ad+2;
    cout<<max(a,n)<<nn;
    cout<<min(a,n)<<nn;
    cout<<nn;
    
   
    
    cout<<ad<<nn;
    cout<<sum<<nn;
    cout<<nn;
    
    
    cout<<f<<nn;
    cout<<g<<nn;
    cout<<nn;
    cout<<nn;
    cout<<nn;
    cout<<nn;
    cout<<nn;
    cout<<min(min(rl1,right),min(left,rl2))<<nn;
//    if(f==0)
//    { cout<<min(ad,sum)+2<<nn;}
//if(ad==0)
//{
//    cout<<2+min(f,g)<<nn;
//}
////    if(==0)
////    {
////        cout<<min(ad,sum)+2<<nn;
////
////    }
//else{
//
//    cout<<min(ad,sum)+min(f,g)+2<<nn;}
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
