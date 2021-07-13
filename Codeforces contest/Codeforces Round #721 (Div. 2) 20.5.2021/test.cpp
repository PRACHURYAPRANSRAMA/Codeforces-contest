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


void printFrequency(vector<int> vec)
{
    // Define an map
    map<int, int> M;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for (int i = 0; vec[i]; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
 
        // Else update the frequency
        else {
            M[vec[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (auto& it : M) {
        cout << it.first << ' '
             << it.second << '\n';
    }
}
 






void solve()
{
    ll n,i,ad=0,sum=0;
    map<ll, ll> m;
    vector<ll> v;
    cin>>n;
    //ll a[n];
     
    ll p[n];
    
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    
    map<ll, ll> M;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for ( i = 0; p[i]; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(p[i]) == M.end()) {
            M[p[i]] = 1;
        }
 
        // Else update the frequency
        else {
            M[p[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (i=0;i<n;i++) {
//        cout << M.first <<" "
//             << M.second <<nn;
        cout<<M[p[i]]<<" ";
        cout<<nn;
        v.push_back(M[p[i]]);
    }
    
    
    
    
    
    
    
    
    // sort(p.begin(),p.end());
//    for(i=0;i<n-1;i++)
//    {
//        if(a[i]!=a[i+1]){ad++;}
//    }
//    for(i=0;i<n;i++)
//    {
//        m[a[i]]++;
//    }
    
//    cout<<ad<<"hello"<<nn;
//    for(i=0;i<=ad+1;i++)
//    {
//        cout<<" hi"<<nn;
//        cout<<v[i]<<" ";
////    }
//    for(i=0;i<n-1;i++)
//    {
//        if(a[i]!=a[i+1])
//        {
//
//            cout<<m[a[i]]<<" "<<m[a[i+1]]<<nn;
//            v.push_back(m[a[i]]);
//            v.push_back(m[a[i+1]]);
//            ad++;
//            }
//    }
    
    cout<<"hello"<<nn;
    for (i=0;i<v.size();i++)
        {
            //cout<<" hi"<<nn;
            cout<<v[i]<<" ";
          //  if(v[i]==2){sum++;}
            //else{
                sum+=(v[i]*(v[i]-1));
           // }
        }
    cout<<nn;
    cout<<sum<<nn;
   
//    cout<<nn;
//    ll k=n;
//    cout<<m[a[k]]<<" ";
//    k--;
}



//
//int main()
//
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//}



int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,long long>x;
long long ans=0;
for(int i=1;i<=n;i++){
int v;
cin>>v;
ans+=x[v]*(n-i+1);
    cout<<x[v]<<" ";
    cout<<nn;
    //cout<<ans<< " "<<" hi";
x[v]+=i;
}
cout<<ans<<endl;
}
}


