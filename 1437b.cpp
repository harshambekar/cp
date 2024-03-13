#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define spc <<' '<<
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.rbegin(), v.rend())
#define f(i, a, b) for(ll i = a; i < b; i++)
#define p(a) cout<<a<<endl;
#define st string
#define sz(s) s.size()
#define len(s) s.length()
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
const ll mod=1e9 + 7;
              
              
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
       if (a % result == 0 && b % result == 0) {
            break;
            }
        result--;
    }
    return result;
}
              
              
/***********************************************START**********************************************************/
              
              
void solve(){
        int n;
        cin >> n;
        st s;
        cin >> s;
        int ans = 0;

        
        f(i,0,n){
             ans += (s[i] == s[(i + 1) % n]);

        }
        
        
        p(ans/2);
              
              
              
              
              
              
}
              
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
              
    }
    return 0;
}