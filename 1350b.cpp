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
        vi v(n,0);

        vi dp(n,0);


        int ans = 1;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            dp[i] = 1;
        }

 
        for(int i = 1; i <= n; i++){
            for(int j = 2*i; j <= n; j+=i){
                if(v[j-1] > v[i-1]){
                    dp[j-1] = max(dp[j-1], dp[i-1]+1);
                }
            }
            ans = max(ans, dp[i-1]);
        }
        
        cout << ans << endl;
              
              
              
              
              
              
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