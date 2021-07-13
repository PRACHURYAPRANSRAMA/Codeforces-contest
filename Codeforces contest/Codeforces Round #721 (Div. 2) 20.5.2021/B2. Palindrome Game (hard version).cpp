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
int  isPalindrome(string str)
{
    int flag=0;
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.size() - 1;
    int ad=0;
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            ad++;
           // printf("%s is Not Palindrome", str);
            
            return 0;
        }
    }
    
    return 1;
    //printf("%s is palindrome", str);
}
//int main()
//{
//    char str1[20], str2[20];
//    int i, j, len = 0, flag = 0;
//    cout << "Enter the string : ";
//    gets(str1);
//    len = strlen(str1) - 1;
//    for (i = len, j = 0; i >= 0 ; i--, j++)
//        str2[j] = str1[i];
//    if (strcmp(str1, str2))
//        flag = 1;
//    if (flag == 1)
//        cout << str1 << " is not a palindrome";
//    else
//        cout << str1 << " is a palindrome";
//    return 0;
//}

void solve()
{
    ll i,ad=0,sum=0,n,K=0,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
       if( s[i]=='0')sum++;
    }
   
    for (int i = 0; i < n - 1 - i; i++)
                if (s[i] != s[n - 1 - i])
                    ad++;
            sum -= ad;
if (sum == 1 && ad == 1)
            {cout << "DRAW"<< endl;return;}
    //if(sum==0){cout<<"DRAW"<<nn;return;}
//    if(isPalindrome(s)==1){
//
//
//    for(i=0;i<n;i++)
//    {
//        //while(s[i]!='0')
//            if(s[i]=='0'){
//                ad++;}
//        //reverseStr(s);
//               // sum++;}
//    }
    if((sum%2==0||sum==1)&&ad==0){cout<<"BOB"<<nn;return;}
    else{cout<<"ALICE"<<nn;return;}
    
    //}
    
    
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
