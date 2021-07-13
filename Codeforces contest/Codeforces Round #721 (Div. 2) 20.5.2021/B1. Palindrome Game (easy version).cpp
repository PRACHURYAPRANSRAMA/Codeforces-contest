//
//  main.cpp
//  B1. Palindrome Game (easy version)
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 20/05/21.
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

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void solve()
{
    ll i,ad=0,sum=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        //while(s[i]!='0') 
            if(s[i]=='0'){
        ad++;
        reverseStr(s);
                sum++;}
    }
    if(ad%2==0||ad==1){cout<<"BOB"<<nn;}
    else{cout<<"ALICE"<<nn;}
    
 
    
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
