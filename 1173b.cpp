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
#define size(s) s.size()
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
              
              
int main()
{
    int t;
    cin>>t;
    while(t--){
        st s;
        cin>>s;
        int a=s.length();

        set<char> sit;
        f(i,0,a){
            sit.insert(s[i]);
        }
        int cnt=size(sit);
        ll ans=0;
        st r = "", q = "";
        f(i,0,cnt) {
            r += s[i];
        }
        f(i,0,(a+cnt-1)/cnt) {
            q += r;
        }
        q = q.substr(0,a);
        if(q == s) cout << "YES\n";
        else cout << "NO\n";
              
              
              
    }
    return 0;
}