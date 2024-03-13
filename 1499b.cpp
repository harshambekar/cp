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
    ll a,b,c,d,e,f,maxi=0,mini=0;
    int y=0;
    st s;
    cin>>s;
    a=len(s);

    f(i,1,a+1){

        if(s[i]==s[i-1]&&s[i]=='1' && y==0){
            y=1;
            maxi=1;
        }
        else if(s[i]==s[i-1]&& s[i]=='0' && y==1){
            mini=1;
        }
    }
            if (maxi == 1 && mini == 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";

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